// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSTACKASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEUSERSTACKASSOCIATIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeUserStackAssociationsResponse;

class DescribeUserStackAssociationsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeUserStackAssociationsResponsePrivate(DescribeUserStackAssociationsResponse * const q);

    void parseDescribeUserStackAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserStackAssociationsResponse)
    Q_DISABLE_COPY(DescribeUserStackAssociationsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
