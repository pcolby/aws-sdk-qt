// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALTRANSCRIPTIONJOBREQUEST_P_H
#define QTAWS_DELETEMEDICALTRANSCRIPTIONJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletemedicaltranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalTranscriptionJobRequest;

class DeleteMedicalTranscriptionJobRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteMedicalTranscriptionJobRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteMedicalTranscriptionJobRequest * const q);
    DeleteMedicalTranscriptionJobRequestPrivate(const DeleteMedicalTranscriptionJobRequestPrivate &other,
                                   DeleteMedicalTranscriptionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMedicalTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
