// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGRESPONSE_P_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigResponse;

class GetResolverQueryLogConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverQueryLogConfigResponsePrivate(GetResolverQueryLogConfigResponse * const q);

    void parseGetResolverQueryLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(GetResolverQueryLogConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
