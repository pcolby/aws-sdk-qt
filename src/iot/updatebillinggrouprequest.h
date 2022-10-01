// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBILLINGGROUPREQUEST_H
#define QTAWS_UPDATEBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT UpdateBillingGroupRequest : public IoTRequest {

public:
    UpdateBillingGroupRequest(const UpdateBillingGroupRequest &other);
    UpdateBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
