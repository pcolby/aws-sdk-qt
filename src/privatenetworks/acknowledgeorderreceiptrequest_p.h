// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEORDERRECEIPTREQUEST_P_H
#define QTAWS_ACKNOWLEDGEORDERRECEIPTREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "acknowledgeorderreceiptrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class AcknowledgeOrderReceiptRequest;

class AcknowledgeOrderReceiptRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    AcknowledgeOrderReceiptRequestPrivate(const PrivateNetworksRequest::Action action,
                                   AcknowledgeOrderReceiptRequest * const q);
    AcknowledgeOrderReceiptRequestPrivate(const AcknowledgeOrderReceiptRequestPrivate &other,
                                   AcknowledgeOrderReceiptRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcknowledgeOrderReceiptRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
