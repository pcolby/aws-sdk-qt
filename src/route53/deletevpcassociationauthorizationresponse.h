// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONRESPONSE_H
#define QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONRESPONSE_H

#include "route53response.h"
#include "deletevpcassociationauthorizationrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteVPCAssociationAuthorizationResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteVPCAssociationAuthorizationResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteVPCAssociationAuthorizationResponse(const DeleteVPCAssociationAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVPCAssociationAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVPCAssociationAuthorizationResponse)
    Q_DISABLE_COPY(DeleteVPCAssociationAuthorizationResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
