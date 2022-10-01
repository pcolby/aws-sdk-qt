// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPRESSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEXPRESSIONSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DescribeExpressionsResponse;

class DescribeExpressionsResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DescribeExpressionsResponsePrivate(DescribeExpressionsResponse * const q);

    void parseDescribeExpressionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExpressionsResponse)
    Q_DISABLE_COPY(DescribeExpressionsResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
