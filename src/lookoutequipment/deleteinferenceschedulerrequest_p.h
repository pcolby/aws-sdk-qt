// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFERENCESCHEDULERREQUEST_P_H
#define QTAWS_DELETEINFERENCESCHEDULERREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "deleteinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteInferenceSchedulerRequest;

class DeleteInferenceSchedulerRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    DeleteInferenceSchedulerRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   DeleteInferenceSchedulerRequest * const q);
    DeleteInferenceSchedulerRequestPrivate(const DeleteInferenceSchedulerRequestPrivate &other,
                                   DeleteInferenceSchedulerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
