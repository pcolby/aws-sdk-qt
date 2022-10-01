// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSCRIPTIONJOBREQUEST_P_H
#define QTAWS_DELETETRANSCRIPTIONJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletetranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteTranscriptionJobRequest;

class DeleteTranscriptionJobRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteTranscriptionJobRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteTranscriptionJobRequest * const q);
    DeleteTranscriptionJobRequestPrivate(const DeleteTranscriptionJobRequestPrivate &other,
                                   DeleteTranscriptionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
