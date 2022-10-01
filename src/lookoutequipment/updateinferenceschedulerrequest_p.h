// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFERENCESCHEDULERREQUEST_P_H
#define QTAWS_UPDATEINFERENCESCHEDULERREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "updateinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateInferenceSchedulerRequest;

class UpdateInferenceSchedulerRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    UpdateInferenceSchedulerRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   UpdateInferenceSchedulerRequest * const q);
    UpdateInferenceSchedulerRequestPrivate(const UpdateInferenceSchedulerRequestPrivate &other,
                                   UpdateInferenceSchedulerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
