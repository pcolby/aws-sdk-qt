// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALTRANSCRIPTIONJOBREQUEST_P_H
#define QTAWS_STARTMEDICALTRANSCRIPTIONJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "startmedicaltranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class StartMedicalTranscriptionJobRequest;

class StartMedicalTranscriptionJobRequestPrivate : public TranscribeRequestPrivate {

public:
    StartMedicalTranscriptionJobRequestPrivate(const TranscribeRequest::Action action,
                                   StartMedicalTranscriptionJobRequest * const q);
    StartMedicalTranscriptionJobRequestPrivate(const StartMedicalTranscriptionJobRequestPrivate &other,
                                   StartMedicalTranscriptionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMedicalTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
