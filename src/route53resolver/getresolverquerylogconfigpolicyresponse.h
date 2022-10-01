// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGPOLICYRESPONSE_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGPOLICYRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverquerylogconfigpolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigPolicyResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverQueryLogConfigPolicyResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverQueryLogConfigPolicyResponse(const GetResolverQueryLogConfigPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverQueryLogConfigPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverQueryLogConfigPolicyResponse)
    Q_DISABLE_COPY(GetResolverQueryLogConfigPolicyResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
