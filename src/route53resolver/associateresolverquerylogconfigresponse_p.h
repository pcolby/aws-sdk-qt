// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGRESPONSE_P_H
#define QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverQueryLogConfigResponse;

class AssociateResolverQueryLogConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit AssociateResolverQueryLogConfigResponsePrivate(AssociateResolverQueryLogConfigResponse * const q);

    void parseAssociateResolverQueryLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(AssociateResolverQueryLogConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
