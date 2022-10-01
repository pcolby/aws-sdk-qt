// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCESCHEDULERREQUEST_P_H
#define QTAWS_DESCRIBEINFERENCESCHEDULERREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "describeinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeInferenceSchedulerRequest;

class DescribeInferenceSchedulerRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DescribeInferenceSchedulerRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DescribeInferenceSchedulerRequest * const q);
    DescribeInferenceSchedulerRequestPrivate(const DescribeInferenceSchedulerRequestPrivate &other,
                                   DescribeInferenceSchedulerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
