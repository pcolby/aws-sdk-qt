// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONREQUEST_P_H
#define QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getenrollmentstatusesfororganizationrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusesForOrganizationRequest;

class GetEnrollmentStatusesForOrganizationRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEnrollmentStatusesForOrganizationRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEnrollmentStatusesForOrganizationRequest * const q);
    GetEnrollmentStatusesForOrganizationRequestPrivate(const GetEnrollmentStatusesForOrganizationRequestPrivate &other,
                                   GetEnrollmentStatusesForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnrollmentStatusesForOrganizationRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
