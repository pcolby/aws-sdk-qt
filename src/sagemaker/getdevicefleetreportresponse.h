// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEFLEETREPORTRESPONSE_H
#define QTAWS_GETDEVICEFLEETREPORTRESPONSE_H

#include "sagemakerresponse.h"
#include "getdevicefleetreportrequest.h"

namespace QtAws {
namespace SageMaker {

class GetDeviceFleetReportResponsePrivate;

class QTAWSSAGEMAKER_EXPORT GetDeviceFleetReportResponse : public SageMakerResponse {
    Q_OBJECT

public:
    GetDeviceFleetReportResponse(const GetDeviceFleetReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceFleetReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceFleetReportResponse)
    Q_DISABLE_COPY(GetDeviceFleetReportResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
