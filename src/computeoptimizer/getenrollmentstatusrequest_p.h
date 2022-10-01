// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSREQUEST_P_H
#define QTAWS_GETENROLLMENTSTATUSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getenrollmentstatusrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusRequest;

class GetEnrollmentStatusRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEnrollmentStatusRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEnrollmentStatusRequest * const q);
    GetEnrollmentStatusRequestPrivate(const GetEnrollmentStatusRequestPrivate &other,
                                   GetEnrollmentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnrollmentStatusRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
