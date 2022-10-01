// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCEDRIFTSRESPONSE_P_H
#define QTAWS_DESCRIBESTACKRESOURCEDRIFTSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceDriftsResponse;

class DescribeStackResourceDriftsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackResourceDriftsResponsePrivate(DescribeStackResourceDriftsResponse * const q);

    void parseDescribeStackResourceDriftsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackResourceDriftsResponse)
    Q_DISABLE_COPY(DescribeStackResourceDriftsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
