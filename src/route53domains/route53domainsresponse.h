// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53DOMAINSRESPONSE_H
#define QTAWS_ROUTE53DOMAINSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsroute53domainsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Route53Domains {

class Route53DomainsResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT Route53DomainsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Route53DomainsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    Route53DomainsResponse(Route53DomainsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53DomainsResponse)
    Q_DISABLE_COPY(Route53DomainsResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
