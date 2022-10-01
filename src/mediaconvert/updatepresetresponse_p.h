// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRESETRESPONSE_P_H
#define QTAWS_UPDATEPRESETRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class UpdatePresetResponse;

class UpdatePresetResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit UpdatePresetResponsePrivate(UpdatePresetResponse * const q);

    void parseUpdatePresetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePresetResponse)
    Q_DISABLE_COPY(UpdatePresetResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
