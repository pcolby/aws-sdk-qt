// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALTRANSCRIPTIONJOBSREQUEST_P_H
#define QTAWS_LISTMEDICALTRANSCRIPTIONJOBSREQUEST_P_H

#include "transcriberequest_p.h"
#include "listmedicaltranscriptionjobsrequest.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalTranscriptionJobsRequest;

class ListMedicalTranscriptionJobsRequestPrivate : public TranscribeRequestPrivate {

public:
    ListMedicalTranscriptionJobsRequestPrivate(const TranscribeRequest::Action action,
                                   ListMedicalTranscriptionJobsRequest * const q);
    ListMedicalTranscriptionJobsRequestPrivate(const ListMedicalTranscriptionJobsRequestPrivate &other,
                                   ListMedicalTranscriptionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMedicalTranscriptionJobsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
