// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINTRANSFERLOCKRESPONSE_P_H
#define QTAWS_DISABLEDOMAINTRANSFERLOCKRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainTransferLockResponse;

class DisableDomainTransferLockResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit DisableDomainTransferLockResponsePrivate(DisableDomainTransferLockResponse * const q);

    void parseDisableDomainTransferLockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableDomainTransferLockResponse)
    Q_DISABLE_COPY(DisableDomainTransferLockResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
