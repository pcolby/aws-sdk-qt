// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEORDERRECEIPTREQUEST_H
#define QTAWS_ACKNOWLEDGEORDERRECEIPTREQUEST_H

#include "privatenetworksrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class AcknowledgeOrderReceiptRequestPrivate;

class QTAWSPRIVATENETWORKS_EXPORT AcknowledgeOrderReceiptRequest : public PrivateNetworksRequest {

public:
    AcknowledgeOrderReceiptRequest(const AcknowledgeOrderReceiptRequest &other);
    AcknowledgeOrderReceiptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcknowledgeOrderReceiptRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
