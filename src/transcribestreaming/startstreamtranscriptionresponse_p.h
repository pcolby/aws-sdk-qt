// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMTRANSCRIPTIONRESPONSE_P_H
#define QTAWS_STARTSTREAMTRANSCRIPTIONRESPONSE_P_H

#include "transcribestreamingresponse_p.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartStreamTranscriptionResponse;

class StartStreamTranscriptionResponsePrivate : public TranscribeStreamingResponsePrivate {

public:

    explicit StartStreamTranscriptionResponsePrivate(StartStreamTranscriptionResponse * const q);

    void parseStartStreamTranscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStreamTranscriptionResponse)
    Q_DISABLE_COPY(StartStreamTranscriptionResponsePrivate)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
