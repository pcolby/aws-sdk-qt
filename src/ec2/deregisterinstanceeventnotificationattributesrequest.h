// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_H
#define QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeregisterInstanceEventNotificationAttributesRequestPrivate;

class QTAWSEC2_EXPORT DeregisterInstanceEventNotificationAttributesRequest : public Ec2Request {

public:
    DeregisterInstanceEventNotificationAttributesRequest(const DeregisterInstanceEventNotificationAttributesRequest &other);
    DeregisterInstanceEventNotificationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterInstanceEventNotificationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
