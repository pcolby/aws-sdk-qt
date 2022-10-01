// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONRESPONSE_P_H
#define QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteVPCAssociationAuthorizationResponse;

class DeleteVPCAssociationAuthorizationResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteVPCAssociationAuthorizationResponsePrivate(DeleteVPCAssociationAuthorizationResponse * const q);

    void parseDeleteVPCAssociationAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVPCAssociationAuthorizationResponse)
    Q_DISABLE_COPY(DeleteVPCAssociationAuthorizationResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
