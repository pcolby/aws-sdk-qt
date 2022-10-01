// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_H

#include "sesv2response.h"
#include "createdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateDeliverabilityTestReportResponsePrivate;

class QTAWSSESV2_EXPORT CreateDeliverabilityTestReportResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateDeliverabilityTestReportResponse(const CreateDeliverabilityTestReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeliverabilityTestReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(CreateDeliverabilityTestReportResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
