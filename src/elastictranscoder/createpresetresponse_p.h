// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESETRESPONSE_P_H
#define QTAWS_CREATEPRESETRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class CreatePresetResponse;

class CreatePresetResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit CreatePresetResponsePrivate(CreatePresetResponse * const q);

    void parseCreatePresetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePresetResponse)
    Q_DISABLE_COPY(CreatePresetResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
