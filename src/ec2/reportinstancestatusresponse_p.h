// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTINSTANCESTATUSRESPONSE_P_H
#define QTAWS_REPORTINSTANCESTATUSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReportInstanceStatusResponse;

class ReportInstanceStatusResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReportInstanceStatusResponsePrivate(ReportInstanceStatusResponse * const q);

    void parseReportInstanceStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReportInstanceStatusResponse)
    Q_DISABLE_COPY(ReportInstanceStatusResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
