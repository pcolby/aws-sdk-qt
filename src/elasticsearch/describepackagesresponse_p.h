// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGESRESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGESRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class DescribePackagesResponse;

class DescribePackagesResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit DescribePackagesResponsePrivate(DescribePackagesResponse * const q);

    void parseDescribePackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackagesResponse)
    Q_DISABLE_COPY(DescribePackagesResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
