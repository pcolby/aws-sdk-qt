// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBILLINGGROUPREQUEST_H
#define QTAWS_DELETEBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT DeleteBillingGroupRequest : public IoTRequest {

public:
    DeleteBillingGroupRequest(const DeleteBillingGroupRequest &other);
    DeleteBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
