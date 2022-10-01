// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRXNORMINFERENCEJOBSREQUEST_P_H
#define QTAWS_LISTRXNORMINFERENCEJOBSREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "listrxnorminferencejobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListRxNormInferenceJobsRequest;

class ListRxNormInferenceJobsRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    ListRxNormInferenceJobsRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   ListRxNormInferenceJobsRequest * const q);
    ListRxNormInferenceJobsRequestPrivate(const ListRxNormInferenceJobsRequestPrivate &other,
                                   ListRxNormInferenceJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRxNormInferenceJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
