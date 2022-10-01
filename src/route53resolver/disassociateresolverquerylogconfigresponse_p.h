// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERQUERYLOGCONFIGRESPONSE_P_H
#define QTAWS_DISASSOCIATERESOLVERQUERYLOGCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverQueryLogConfigResponse;

class DisassociateResolverQueryLogConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DisassociateResolverQueryLogConfigResponsePrivate(DisassociateResolverQueryLogConfigResponse * const q);

    void parseDisassociateResolverQueryLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(DisassociateResolverQueryLogConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
