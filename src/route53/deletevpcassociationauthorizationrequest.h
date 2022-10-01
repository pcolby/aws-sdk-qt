// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONREQUEST_H
#define QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteVPCAssociationAuthorizationRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteVPCAssociationAuthorizationRequest : public Route53Request {

public:
    DeleteVPCAssociationAuthorizationRequest(const DeleteVPCAssociationAuthorizationRequest &other);
    DeleteVPCAssociationAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVPCAssociationAuthorizationRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
