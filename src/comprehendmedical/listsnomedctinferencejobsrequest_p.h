// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNOMEDCTINFERENCEJOBSREQUEST_P_H
#define QTAWS_LISTSNOMEDCTINFERENCEJOBSREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "listsnomedctinferencejobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListSNOMEDCTInferenceJobsRequest;

class ListSNOMEDCTInferenceJobsRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    ListSNOMEDCTInferenceJobsRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   ListSNOMEDCTInferenceJobsRequest * const q);
    ListSNOMEDCTInferenceJobsRequestPrivate(const ListSNOMEDCTInferenceJobsRequestPrivate &other,
                                   ListSNOMEDCTInferenceJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSNOMEDCTInferenceJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
