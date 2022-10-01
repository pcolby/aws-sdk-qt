// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINTRANSFERLOCKRESPONSE_P_H
#define QTAWS_ENABLEDOMAINTRANSFERLOCKRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainTransferLockResponse;

class EnableDomainTransferLockResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit EnableDomainTransferLockResponsePrivate(EnableDomainTransferLockResponse * const q);

    void parseEnableDomainTransferLockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableDomainTransferLockResponse)
    Q_DISABLE_COPY(EnableDomainTransferLockResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
