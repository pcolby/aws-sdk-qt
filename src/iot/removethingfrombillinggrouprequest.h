// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMBILLINGGROUPREQUEST_H
#define QTAWS_REMOVETHINGFROMBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT RemoveThingFromBillingGroupRequest : public IoTRequest {

public:
    RemoveThingFromBillingGroupRequest(const RemoveThingFromBillingGroupRequest &other);
    RemoveThingFromBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveThingFromBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
