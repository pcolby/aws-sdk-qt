// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_H
#define QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_H

#include "pinpointemailresponse.h"
#include "getdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityTestReportResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDeliverabilityTestReportResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetDeliverabilityTestReportResponse(const GetDeliverabilityTestReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeliverabilityTestReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(GetDeliverabilityTestReportResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
