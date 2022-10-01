// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSRESPONSE_P_H
#define QTAWS_DESCRIBESTACKSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeStacksResponse;

class DescribeStacksResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeStacksResponsePrivate(DescribeStacksResponse * const q);

    void parseDescribeStacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStacksResponse)
    Q_DISABLE_COPY(DescribeStacksResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
