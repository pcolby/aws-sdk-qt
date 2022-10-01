// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACCESSPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBESERVICEACCESSPOLICIESRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DescribeServiceAccessPoliciesResponse;

class DescribeServiceAccessPoliciesResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DescribeServiceAccessPoliciesResponsePrivate(DescribeServiceAccessPoliciesResponse * const q);

    void parseDescribeServiceAccessPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceAccessPoliciesResponse)
    Q_DISABLE_COPY(DescribeServiceAccessPoliciesResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
