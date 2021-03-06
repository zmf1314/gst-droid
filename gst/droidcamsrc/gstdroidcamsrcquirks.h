/*
 * gst-droid
 *
 * Copyright (C) 2014 Mohammed Sameer <msameer@foolab.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_DROIDCAMSRC_QUIRKS_H__
#define __GST_DROIDCAMSRC_QUIRKS_H__

#include <glib.h>

G_BEGIN_DECLS

typedef struct _GstDroidCamSrcQuirks GstDroidCamSrcQuirks;
typedef struct _GstDroidCamSrcQuirk GstDroidCamSrcQuirk;

struct _GstDroidCamSrcQuirk
{
  gchar *prop;
  gchar *on;
  gchar *off;
  gint direction;
};

struct _GstDroidCamSrcQuirks
{
  GstDroidCamSrcQuirk *face_detection;
  GstDroidCamSrcQuirk *image_noise_reduction;
};

GstDroidCamSrcQuirks * gst_droidcamsrc_quirks_new ();
void gst_droidcamsrc_quirks_destroy (GstDroidCamSrcQuirks * quirks);

G_END_DECLS

#endif /* __GST_DROIDCAMSRC_QUIRKS_H__ */
