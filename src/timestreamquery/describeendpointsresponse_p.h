// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTSRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeEndpointsResponse;

class DescribeEndpointsResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit DescribeEndpointsResponsePrivate(DescribeEndpointsResponse * const q);

    void parseDescribeEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointsResponse)
    Q_DISABLE_COPY(DescribeEndpointsResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
