// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEFLEETREPORTRESPONSE_P_H
#define QTAWS_GETDEVICEFLEETREPORTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class GetDeviceFleetReportResponse;

class GetDeviceFleetReportResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit GetDeviceFleetReportResponsePrivate(GetDeviceFleetReportResponse * const q);

    void parseGetDeviceFleetReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceFleetReportResponse)
    Q_DISABLE_COPY(GetDeviceFleetReportResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
