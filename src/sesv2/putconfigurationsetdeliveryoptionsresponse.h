// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSRESPONSE_H

#include "sesv2response.h"
#include "putconfigurationsetdeliveryoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetDeliveryOptionsResponsePrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetDeliveryOptionsResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
