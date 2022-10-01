// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRESETRESPONSE_P_H
#define QTAWS_DELETEPRESETRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class DeletePresetResponse;

class DeletePresetResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit DeletePresetResponsePrivate(DeletePresetResponse * const q);

    void parseDeletePresetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePresetResponse)
    Q_DISABLE_COPY(DeletePresetResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
