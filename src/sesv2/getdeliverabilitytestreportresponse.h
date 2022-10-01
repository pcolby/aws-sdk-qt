// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_H
#define QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_H

#include "sesv2response.h"
#include "getdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDeliverabilityTestReportResponsePrivate;

class QTAWSSESV2_EXPORT GetDeliverabilityTestReportResponse : public SESv2Response {
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

} // namespace SESv2
} // namespace QtAws

#endif
