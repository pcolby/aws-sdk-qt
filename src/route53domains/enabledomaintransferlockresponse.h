// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINTRANSFERLOCKRESPONSE_H
#define QTAWS_ENABLEDOMAINTRANSFERLOCKRESPONSE_H

#include "route53domainsresponse.h"
#include "enabledomaintransferlockrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainTransferLockResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT EnableDomainTransferLockResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    EnableDomainTransferLockResponse(const EnableDomainTransferLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableDomainTransferLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDomainTransferLockResponse)
    Q_DISABLE_COPY(EnableDomainTransferLockResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
