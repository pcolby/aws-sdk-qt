// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINFERENCESCHEDULERREQUEST_P_H
#define QTAWS_STARTINFERENCESCHEDULERREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "startinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StartInferenceSchedulerRequest;

class StartInferenceSchedulerRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    StartInferenceSchedulerRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   StartInferenceSchedulerRequest * const q);
    StartInferenceSchedulerRequestPrivate(const StartInferenceSchedulerRequestPrivate &other,
                                   StartInferenceSchedulerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
