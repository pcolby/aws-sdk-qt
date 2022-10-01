// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSREQUEST_H
#define QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListVPCAssociationAuthorizationsRequestPrivate;

class QTAWSROUTE53_EXPORT ListVPCAssociationAuthorizationsRequest : public Route53Request {

public:
    ListVPCAssociationAuthorizationsRequest(const ListVPCAssociationAuthorizationsRequest &other);
    ListVPCAssociationAuthorizationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVPCAssociationAuthorizationsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
