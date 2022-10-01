// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINSRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainsResponse;

class DescribeDomainsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeDomainsResponsePrivate(DescribeDomainsResponse * const q);

    void parseDescribeDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainsResponse)
    Q_DISABLE_COPY(DescribeDomainsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
