// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONRESPONSE_P_H
#define QTAWS_CREATEVPCASSOCIATIONAUTHORIZATIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateVPCAssociationAuthorizationResponse;

class CreateVPCAssociationAuthorizationResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateVPCAssociationAuthorizationResponsePrivate(CreateVPCAssociationAuthorizationResponse * const q);

    void parseCreateVPCAssociationAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVPCAssociationAuthorizationResponse)
    Q_DISABLE_COPY(CreateVPCAssociationAuthorizationResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
