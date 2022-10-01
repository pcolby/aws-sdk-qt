// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISSCHEMESRESPONSE_P_H
#define QTAWS_DESCRIBEANALYSISSCHEMESRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAnalysisSchemesResponse;

class DescribeAnalysisSchemesResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DescribeAnalysisSchemesResponsePrivate(DescribeAnalysisSchemesResponse * const q);

    void parseDescribeAnalysisSchemesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnalysisSchemesResponse)
    Q_DISABLE_COPY(DescribeAnalysisSchemesResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
