// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKEVENTSRESPONSE_P_H
#define QTAWS_DESCRIBESTACKEVENTSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackEventsResponse;

class DescribeStackEventsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeStackEventsResponsePrivate(DescribeStackEventsResponse * const q);

    void parseDescribeStackEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackEventsResponse)
    Q_DISABLE_COPY(DescribeStackEventsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
