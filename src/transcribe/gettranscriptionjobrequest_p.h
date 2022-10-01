// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTIONJOBREQUEST_P_H
#define QTAWS_GETTRANSCRIPTIONJOBREQUEST_P_H

#include "transcriberequest_p.h"
#include "gettranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class GetTranscriptionJobRequest;

class GetTranscriptionJobRequestPrivate : public TranscribeRequestPrivate {

public:
    GetTranscriptionJobRequestPrivate(const TranscribeRequest::Action action,
                                   GetTranscriptionJobRequest * const q);
    GetTranscriptionJobRequestPrivate(const GetTranscriptionJobRequestPrivate &other,
                                   GetTranscriptionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
