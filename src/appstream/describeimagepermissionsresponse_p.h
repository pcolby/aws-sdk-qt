// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGEPERMISSIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeImagePermissionsResponse;

class DescribeImagePermissionsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeImagePermissionsResponsePrivate(DescribeImagePermissionsResponse * const q);

    void parseDescribeImagePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImagePermissionsResponse)
    Q_DISABLE_COPY(DescribeImagePermissionsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
