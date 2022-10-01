// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONRESPONSE_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONRESPONSE_H

#include "pinpointemailresponse.h"
#include "putdeliverabilitydashboardoptionrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDeliverabilityDashboardOptionResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutDeliverabilityDashboardOptionResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutDeliverabilityDashboardOptionResponse(const PutDeliverabilityDashboardOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDeliverabilityDashboardOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDeliverabilityDashboardOptionResponse)
    Q_DISABLE_COPY(PutDeliverabilityDashboardOptionResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
