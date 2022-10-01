// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPBLOCKSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPBLOCKSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeAppBlocksResponse;

class DescribeAppBlocksResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeAppBlocksResponsePrivate(DescribeAppBlocksResponse * const q);

    void parseDescribeAppBlocksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppBlocksResponse)
    Q_DISABLE_COPY(DescribeAppBlocksResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
