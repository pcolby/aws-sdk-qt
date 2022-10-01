// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPRESETRESPONSE_P_H
#define QTAWS_READPRESETRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPresetResponse;

class ReadPresetResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ReadPresetResponsePrivate(ReadPresetResponse * const q);

    void parseReadPresetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReadPresetResponse)
    Q_DISABLE_COPY(ReadPresetResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
