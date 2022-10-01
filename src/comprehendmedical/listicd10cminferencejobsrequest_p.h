// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTICD10CMINFERENCEJOBSREQUEST_P_H
#define QTAWS_LISTICD10CMINFERENCEJOBSREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "listicd10cminferencejobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListICD10CMInferenceJobsRequest;

class ListICD10CMInferenceJobsRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    ListICD10CMInferenceJobsRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   ListICD10CMInferenceJobsRequest * const q);
    ListICD10CMInferenceJobsRequestPrivate(const ListICD10CMInferenceJobsRequestPrivate &other,
                                   ListICD10CMInferenceJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListICD10CMInferenceJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
