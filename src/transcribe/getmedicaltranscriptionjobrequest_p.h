// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALTRANSCRIPTIONJOBREQUEST_P_H
#define QTAWS_GETMEDICALTRANSCRIPTIONJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "getmedicaltranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalTranscriptionJobRequest;

class GetMedicalTranscriptionJobRequestPrivate : public TranscribeRequestPrivate {

public:
    GetMedicalTranscriptionJobRequestPrivate(const TranscribeRequest::Action action,
                                   GetMedicalTranscriptionJobRequest * const q);
    GetMedicalTranscriptionJobRequestPrivate(const GetMedicalTranscriptionJobRequestPrivate &other,
                                   GetMedicalTranscriptionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMedicalTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
