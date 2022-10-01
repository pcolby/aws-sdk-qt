// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetDeliveryOptionsResponse;

class PutConfigurationSetDeliveryOptionsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutConfigurationSetDeliveryOptionsResponsePrivate(PutConfigurationSetDeliveryOptionsResponse * const q);

    void parsePutConfigurationSetDeliveryOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetDeliveryOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetDeliveryOptionsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
