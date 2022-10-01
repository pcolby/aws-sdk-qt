// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERQUERYLOGCONFIGRESPONSE_P_H
#define QTAWS_DELETERESOLVERQUERYLOGCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverQueryLogConfigResponse;

class DeleteResolverQueryLogConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DeleteResolverQueryLogConfigResponsePrivate(DeleteResolverQueryLogConfigResponse * const q);

    void parseDeleteResolverQueryLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(DeleteResolverQueryLogConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
