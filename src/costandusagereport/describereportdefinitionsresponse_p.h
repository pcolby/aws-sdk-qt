// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTDEFINITIONSRESPONSE_P_H
#define QTAWS_DESCRIBEREPORTDEFINITIONSRESPONSE_P_H

#include "costandusagereportresponse_p.h"

namespace QtAws {
namespace CostandUsageReport {

class DescribeReportDefinitionsResponse;

class DescribeReportDefinitionsResponsePrivate : public CostandUsageReportResponsePrivate {

public:

    explicit DescribeReportDefinitionsResponsePrivate(DescribeReportDefinitionsResponse * const q);

    void parseDescribeReportDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReportDefinitionsResponse)
    Q_DISABLE_COPY(DescribeReportDefinitionsResponsePrivate)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
