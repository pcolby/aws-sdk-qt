// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMTRANSCRIPTIONREQUEST_P_H
#define QTAWS_STARTSTREAMTRANSCRIPTIONREQUEST_P_H

#include "transcribestreamingrequest_p.h"
#include "startstreamtranscriptionrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartStreamTranscriptionRequest;

class StartStreamTranscriptionRequestPrivate : public TranscribeStreamingRequestPrivate {

public:
    StartStreamTranscriptionRequestPrivate(const TranscribeStreamingRequest::Action action,
                                   StartStreamTranscriptionRequest * const q);
    StartStreamTranscriptionRequestPrivate(const StartStreamTranscriptionRequestPrivate &other,
                                   StartStreamTranscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStreamTranscriptionRequest)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
