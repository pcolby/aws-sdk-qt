// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONREQUEST_P_H
#define QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONREQUEST_P_H

#include "transcribestreamingrequest_p.h"
#include "startmedicalstreamtranscriptionrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartMedicalStreamTranscriptionRequest;

class StartMedicalStreamTranscriptionRequestPrivate : public TranscribeStreamingRequestPrivate {

public:
    StartMedicalStreamTranscriptionRequestPrivate(const TranscribeStreamingRequest::Action action,
                                   StartMedicalStreamTranscriptionRequest * const q);
    StartMedicalStreamTranscriptionRequestPrivate(const StartMedicalStreamTranscriptionRequestPrivate &other,
                                   StartMedicalStreamTranscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMedicalStreamTranscriptionRequest)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
