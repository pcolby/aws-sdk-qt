// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_H
#define QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RegisterInstanceEventNotificationAttributesRequestPrivate;

class QTAWSEC2_EXPORT RegisterInstanceEventNotificationAttributesRequest : public Ec2Request {

public:
    RegisterInstanceEventNotificationAttributesRequest(const RegisterInstanceEventNotificationAttributesRequest &other);
    RegisterInstanceEventNotificationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstanceEventNotificationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
