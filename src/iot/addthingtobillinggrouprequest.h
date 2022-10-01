// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOBILLINGGROUPREQUEST_H
#define QTAWS_ADDTHINGTOBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AddThingToBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT AddThingToBillingGroupRequest : public IoTRequest {

public:
    AddThingToBillingGroupRequest(const AddThingToBillingGroupRequest &other);
    AddThingToBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddThingToBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
