// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERRULERESPONSE_P_H
#define QTAWS_DISASSOCIATERESOLVERRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverRuleResponse;

class DisassociateResolverRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DisassociateResolverRuleResponsePrivate(DisassociateResolverRuleResponse * const q);

    void parseDisassociateResolverRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverRuleResponse)
    Q_DISABLE_COPY(DisassociateResolverRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
