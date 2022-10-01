// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINFERENCESCHEDULERREQUEST_H
#define QTAWS_STARTINFERENCESCHEDULERREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StartInferenceSchedulerRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT StartInferenceSchedulerRequest : public LookoutEquipmentRequest {

public:
    StartInferenceSchedulerRequest(const StartInferenceSchedulerRequest &other);
    StartInferenceSchedulerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
