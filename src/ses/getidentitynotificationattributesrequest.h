// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESREQUEST_H
#define QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityNotificationAttributesRequestPrivate;

class QTAWSSES_EXPORT GetIdentityNotificationAttributesRequest : public SesRequest {

public:
    GetIdentityNotificationAttributesRequest(const GetIdentityNotificationAttributesRequest &other);
    GetIdentityNotificationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityNotificationAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
