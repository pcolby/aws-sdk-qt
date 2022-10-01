// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONRESPONSE_H
#define QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONRESPONSE_H

#include "route53response.h"
#include "createvpcassociationauthorizationrequest.h"

namespace QtAws {
namespace Route53 {

class CreateVPCAssociationAuthorizationResponsePrivate;

class QTAWSROUTE53_EXPORT CreateVPCAssociationAuthorizationResponse : public Route53Response {
    Q_OBJECT

public:
    CreateVPCAssociationAuthorizationResponse(const CreateVPCAssociationAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVPCAssociationAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVPCAssociationAuthorizationResponse)
    Q_DISABLE_COPY(CreateVPCAssociationAuthorizationResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
