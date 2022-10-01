// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEORDERRECEIPTRESPONSE_P_H
#define QTAWS_ACKNOWLEDGEORDERRECEIPTRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class AcknowledgeOrderReceiptResponse;

class AcknowledgeOrderReceiptResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit AcknowledgeOrderReceiptResponsePrivate(AcknowledgeOrderReceiptResponse * const q);

    void parseAcknowledgeOrderReceiptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcknowledgeOrderReceiptResponse)
    Q_DISABLE_COPY(AcknowledgeOrderReceiptResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
