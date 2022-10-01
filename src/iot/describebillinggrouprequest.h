// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBILLINGGROUPREQUEST_H
#define QTAWS_DESCRIBEBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT DescribeBillingGroupRequest : public IoTRequest {

public:
    DescribeBillingGroupRequest(const DescribeBillingGroupRequest &other);
    DescribeBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
