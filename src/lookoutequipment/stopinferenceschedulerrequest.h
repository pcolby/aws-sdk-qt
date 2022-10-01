// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCESCHEDULERREQUEST_H
#define QTAWS_STOPINFERENCESCHEDULERREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StopInferenceSchedulerRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT StopInferenceSchedulerRequest : public LookoutEquipmentRequest {

public:
    StopInferenceSchedulerRequest(const StopInferenceSchedulerRequest &other);
    StopInferenceSchedulerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
