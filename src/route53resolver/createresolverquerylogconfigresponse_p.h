// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERQUERYLOGCONFIGRESPONSE_P_H
#define QTAWS_CREATERESOLVERQUERYLOGCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverQueryLogConfigResponse;

class CreateResolverQueryLogConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit CreateResolverQueryLogConfigResponsePrivate(CreateResolverQueryLogConfigResponse * const q);

    void parseCreateResolverQueryLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(CreateResolverQueryLogConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
