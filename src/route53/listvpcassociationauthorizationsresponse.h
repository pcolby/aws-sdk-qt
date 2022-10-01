// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSRESPONSE_H
#define QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSRESPONSE_H

#include "route53response.h"
#include "listvpcassociationauthorizationsrequest.h"

namespace QtAws {
namespace Route53 {

class ListVPCAssociationAuthorizationsResponsePrivate;

class QTAWSROUTE53_EXPORT ListVPCAssociationAuthorizationsResponse : public Route53Response {
    Q_OBJECT

public:
    ListVPCAssociationAuthorizationsResponse(const ListVPCAssociationAuthorizationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVPCAssociationAuthorizationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVPCAssociationAuthorizationsResponse)
    Q_DISABLE_COPY(ListVPCAssociationAuthorizationsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
