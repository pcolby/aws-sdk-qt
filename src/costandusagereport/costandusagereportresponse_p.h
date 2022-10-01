// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTANDUSAGEREPORTRESPONSE_P_H
#define QTAWS_COSTANDUSAGEREPORTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CostandUsageReport {

class CostandUsageReportResponse;

class CostandUsageReportResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CostandUsageReportResponsePrivate(CostandUsageReportResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CostandUsageReportResponse)
    Q_DISABLE_COPY(CostandUsageReportResponsePrivate)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
