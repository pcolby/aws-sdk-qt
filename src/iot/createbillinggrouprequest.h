// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBILLINGGROUPREQUEST_H
#define QTAWS_CREATEBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT CreateBillingGroupRequest : public IoTRequest {

public:
    CreateBillingGroupRequest(const CreateBillingGroupRequest &other);
    CreateBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
