// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONRESPONSE_H
#define QTAWS_PUTDELIVERABILITYDASHBOARDOPTIONRESPONSE_H

#include "sesv2response.h"
#include "putdeliverabilitydashboardoptionrequest.h"

namespace QtAws {
namespace SESv2 {

class PutDeliverabilityDashboardOptionResponsePrivate;

class QTAWSSESV2_EXPORT PutDeliverabilityDashboardOptionResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
