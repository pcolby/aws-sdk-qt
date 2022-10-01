// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESESSIONSRESPONSE_P_H
#define QTAWS_DESCRIBESESSIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeSessionsResponse;

class DescribeSessionsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeSessionsResponsePrivate(DescribeSessionsResponse * const q);

    void parseDescribeSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSessionsResponse)
    Q_DISABLE_COPY(DescribeSessionsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
