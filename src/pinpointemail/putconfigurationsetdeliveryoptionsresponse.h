// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_H

#include "pinpointemailresponse.h"
#include "putconfigurationsetdeliveryoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetDeliveryOptionsResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutConfigurationSetDeliveryOptionsResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutConfigurationSetDeliveryOptionsResponse(const PutConfigurationSetDeliveryOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigurationSetDeliveryOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetDeliveryOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetDeliveryOptionsResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
