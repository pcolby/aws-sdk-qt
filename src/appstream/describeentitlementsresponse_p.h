// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITLEMENTSRESPONSE_P_H
#define QTAWS_DESCRIBEENTITLEMENTSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeEntitlementsResponse;

class DescribeEntitlementsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeEntitlementsResponsePrivate(DescribeEntitlementsResponse * const q);

    void parseDescribeEntitlementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEntitlementsResponse)
    Q_DISABLE_COPY(DescribeEntitlementsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
