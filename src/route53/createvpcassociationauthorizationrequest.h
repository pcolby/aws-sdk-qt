// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONREQUEST_H
#define QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateVPCAssociationAuthorizationRequestPrivate;

class QTAWSROUTE53_EXPORT CreateVPCAssociationAuthorizationRequest : public Route53Request {

public:
    CreateVPCAssociationAuthorizationRequest(const CreateVPCAssociationAuthorizationRequest &other);
    CreateVPCAssociationAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVPCAssociationAuthorizationRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
