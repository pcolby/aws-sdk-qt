// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSRESPONSE_P_H
#define QTAWS_LISTVPCASSOCIATIONAUTHORIZATIONSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListVPCAssociationAuthorizationsResponse;

class ListVPCAssociationAuthorizationsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListVPCAssociationAuthorizationsResponsePrivate(ListVPCAssociationAuthorizationsResponse * const q);

    void parseListVPCAssociationAuthorizationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVPCAssociationAuthorizationsResponse)
    Q_DISABLE_COPY(ListVPCAssociationAuthorizationsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
