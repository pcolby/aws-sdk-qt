// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYRESPONSE_H
#define QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYRESPONSE_H

#include "route53resolverresponse.h"
#include "putresolverquerylogconfigpolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverQueryLogConfigPolicyResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT PutResolverQueryLogConfigPolicyResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    PutResolverQueryLogConfigPolicyResponse(const PutResolverQueryLogConfigPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutResolverQueryLogConfigPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResolverQueryLogConfigPolicyResponse)
    Q_DISABLE_COPY(PutResolverQueryLogConfigPolicyResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
