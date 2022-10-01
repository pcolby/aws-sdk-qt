// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEBUILDERSRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGEBUILDERSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeImageBuildersResponse;

class DescribeImageBuildersResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeImageBuildersResponsePrivate(DescribeImageBuildersResponse * const q);

    void parseDescribeImageBuildersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageBuildersResponse)
    Q_DISABLE_COPY(DescribeImageBuildersResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
