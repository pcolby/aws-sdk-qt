// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFERENCESCHEDULERREQUEST_H
#define QTAWS_UPDATEINFERENCESCHEDULERREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateInferenceSchedulerRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT UpdateInferenceSchedulerRequest : public LookoutEquipmentRequest {

public:
    UpdateInferenceSchedulerRequest(const UpdateInferenceSchedulerRequest &other);
    UpdateInferenceSchedulerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
