// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGESRESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGESRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribePackagesResponse;

class DescribePackagesResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribePackagesResponsePrivate(DescribePackagesResponse * const q);

    void parseDescribePackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackagesResponse)
    Q_DISABLE_COPY(DescribePackagesResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
