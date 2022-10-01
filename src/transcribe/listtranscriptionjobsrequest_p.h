// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSCRIPTIONJOBSREQUEST_P_H
#define QTAWS_LISTTRANSCRIPTIONJOBSREQUEST_P_H

#include "transcriberequest_p.h"
#include "listtranscriptionjobsrequest.h"

namespace QtAws {
namespace Transcribe {

class ListTranscriptionJobsRequest;

class ListTranscriptionJobsRequestPrivate : public TranscribeRequestPrivate {

public:
    ListTranscriptionJobsRequestPrivate(const TranscribeRequest::Action action,
                                   ListTranscriptionJobsRequest * const q);
    ListTranscriptionJobsRequestPrivate(const ListTranscriptionJobsRequestPrivate &other,
                                   ListTranscriptionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTranscriptionJobsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
