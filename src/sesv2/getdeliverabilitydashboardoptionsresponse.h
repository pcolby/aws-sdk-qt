// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_H

#include "sesv2response.h"
#include "getdeliverabilitydashboardoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDeliverabilityDashboardOptionsResponsePrivate;

class QTAWSSESV2_EXPORT GetDeliverabilityDashboardOptionsResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
