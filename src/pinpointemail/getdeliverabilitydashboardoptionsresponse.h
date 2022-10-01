// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_H

#include "pinpointemailresponse.h"
#include "getdeliverabilitydashboardoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityDashboardOptionsResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDeliverabilityDashboardOptionsResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetDeliverabilityDashboardOptionsResponse(const GetDeliverabilityDashboardOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeliverabilityDashboardOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeliverabilityDashboardOptionsResponse)
    Q_DISABLE_COPY(GetDeliverabilityDashboardOptionsResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
