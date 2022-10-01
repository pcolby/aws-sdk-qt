// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYRESPONSE_P_H
#define QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverQueryLogConfigPolicyResponse;

class PutResolverQueryLogConfigPolicyResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit PutResolverQueryLogConfigPolicyResponsePrivate(PutResolverQueryLogConfigPolicyResponse * const q);

    void parsePutResolverQueryLogConfigPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutResolverQueryLogConfigPolicyResponse)
    Q_DISABLE_COPY(PutResolverQueryLogConfigPolicyResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
