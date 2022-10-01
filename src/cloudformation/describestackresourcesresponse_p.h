// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCESRESPONSE_P_H
#define QTAWS_DESCRIBESTACKRESOURCESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourcesResponse;

class DescribeStackResourcesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackResourcesResponsePrivate(DescribeStackResourcesResponse * const q);

    void parseDescribeStackResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackResourcesResponse)
    Q_DISABLE_COPY(DescribeStackResourcesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
