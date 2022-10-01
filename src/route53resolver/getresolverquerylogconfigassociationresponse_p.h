// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONRESPONSE_P_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigAssociationResponse;

class GetResolverQueryLogConfigAssociationResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverQueryLogConfigAssociationResponsePrivate(GetResolverQueryLogConfigAssociationResponse * const q);

    void parseGetResolverQueryLogConfigAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverQueryLogConfigAssociationResponse)
    Q_DISABLE_COPY(GetResolverQueryLogConfigAssociationResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
