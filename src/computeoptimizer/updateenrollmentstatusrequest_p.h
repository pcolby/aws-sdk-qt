// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENROLLMENTSTATUSREQUEST_P_H
#define QTAWS_UPDATEENROLLMENTSTATUSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "updateenrollmentstatusrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class UpdateEnrollmentStatusRequest;

class UpdateEnrollmentStatusRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    UpdateEnrollmentStatusRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   UpdateEnrollmentStatusRequest * const q);
    UpdateEnrollmentStatusRequestPrivate(const UpdateEnrollmentStatusRequestPrivate &other,
                                   UpdateEnrollmentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnrollmentStatusRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
