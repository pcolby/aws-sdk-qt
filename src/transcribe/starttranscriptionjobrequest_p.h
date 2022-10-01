// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSCRIPTIONJOBREQUEST_P_H
#define QTAWS_STARTTRANSCRIPTIONJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "starttranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class StartTranscriptionJobRequest;

class StartTranscriptionJobRequestPrivate : public TranscribeRequestPrivate {

public:
    StartTranscriptionJobRequestPrivate(const TranscribeRequest::Action action,
                                   StartTranscriptionJobRequest * const q);
    StartTranscriptionJobRequestPrivate(const StartTranscriptionJobRequestPrivate &other,
                                   StartTranscriptionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
