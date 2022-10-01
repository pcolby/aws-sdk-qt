// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEORDERRECEIPTRESPONSE_H
#define QTAWS_ACKNOWLEDGEORDERRECEIPTRESPONSE_H

#include "privatenetworksresponse.h"
#include "acknowledgeorderreceiptrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class AcknowledgeOrderReceiptResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT AcknowledgeOrderReceiptResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    AcknowledgeOrderReceiptResponse(const AcknowledgeOrderReceiptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcknowledgeOrderReceiptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcknowledgeOrderReceiptResponse)
    Q_DISABLE_COPY(AcknowledgeOrderReceiptResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
