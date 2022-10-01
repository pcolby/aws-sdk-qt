// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFERENCESCHEDULERREQUEST_P_H
#define QTAWS_CREATEINFERENCESCHEDULERREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "createinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateInferenceSchedulerRequest;

class CreateInferenceSchedulerRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    CreateInferenceSchedulerRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   CreateInferenceSchedulerRequest * const q);
    CreateInferenceSchedulerRequestPrivate(const CreateInferenceSchedulerRequestPrivate &other,
                                   CreateInferenceSchedulerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
