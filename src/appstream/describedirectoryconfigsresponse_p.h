// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORYCONFIGSRESPONSE_P_H
#define QTAWS_DESCRIBEDIRECTORYCONFIGSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeDirectoryConfigsResponse;

class DescribeDirectoryConfigsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeDirectoryConfigsResponsePrivate(DescribeDirectoryConfigsResponse * const q);

    void parseDescribeDirectoryConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDirectoryConfigsResponse)
    Q_DISABLE_COPY(DescribeDirectoryConfigsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
