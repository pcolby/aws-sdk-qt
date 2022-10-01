// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRESETRESPONSE_P_H
#define QTAWS_GETPRESETRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class GetPresetResponse;

class GetPresetResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit GetPresetResponsePrivate(GetPresetResponse * const q);

    void parseGetPresetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPresetResponse)
    Q_DISABLE_COPY(GetPresetResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
