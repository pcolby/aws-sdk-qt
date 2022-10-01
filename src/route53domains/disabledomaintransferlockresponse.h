// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINTRANSFERLOCKRESPONSE_H
#define QTAWS_DISABLEDOMAINTRANSFERLOCKRESPONSE_H

#include "route53domainsresponse.h"
#include "disabledomaintransferlockrequest.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainTransferLockResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT DisableDomainTransferLockResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    DisableDomainTransferLockResponse(const DisableDomainTransferLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableDomainTransferLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDomainTransferLockResponse)
    Q_DISABLE_COPY(DisableDomainTransferLockResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
