// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCESCHEDULERREQUEST_P_H
#define QTAWS_STOPINFERENCESCHEDULERREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "stopinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StopInferenceSchedulerRequest;

class StopInferenceSchedulerRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    StopInferenceSchedulerRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   StopInferenceSchedulerRequest * const q);
    StopInferenceSchedulerRequestPrivate(const StopInferenceSchedulerRequestPrivate &other,
                                   StopInferenceSchedulerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
