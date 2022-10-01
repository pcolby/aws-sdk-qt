// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class PutConfigurationSetDeliveryOptionsResponse;

class PutConfigurationSetDeliveryOptionsResponsePrivate : public SesResponsePrivate {

public:

    explicit PutConfigurationSetDeliveryOptionsResponsePrivate(PutConfigurationSetDeliveryOptionsResponse * const q);

    void parsePutConfigurationSetDeliveryOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetDeliveryOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetDeliveryOptionsResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
