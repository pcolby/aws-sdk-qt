// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHIDETECTIONJOBSREQUEST_P_H
#define QTAWS_LISTPHIDETECTIONJOBSREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "listphidetectionjobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListPHIDetectionJobsRequest;

class ListPHIDetectionJobsRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    ListPHIDetectionJobsRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   ListPHIDetectionJobsRequest * const q);
    ListPHIDetectionJobsRequestPrivate(const ListPHIDetectionJobsRequestPrivate &other,
                                   ListPHIDetectionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPHIDetectionJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
