// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESETRESPONSE_P_H
#define QTAWS_CREATEPRESETRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class CreatePresetResponse;

class CreatePresetResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit CreatePresetResponsePrivate(CreatePresetResponse * const q);

    void parseCreatePresetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePresetResponse)
    Q_DISABLE_COPY(CreatePresetResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
