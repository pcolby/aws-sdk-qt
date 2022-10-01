// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDENDPOINTSRESPONSE_P_H
#define QTAWS_LISTSHAREDENDPOINTSRESPONSE_P_H

#include "s3outpostsresponse_p.h"

namespace QtAws {
namespace S3Outposts {

class ListSharedEndpointsResponse;

class ListSharedEndpointsResponsePrivate : public S3OutpostsResponsePrivate {

public:

    explicit ListSharedEndpointsResponsePrivate(ListSharedEndpointsResponse * const q);

    void parseListSharedEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSharedEndpointsResponse)
    Q_DISABLE_COPY(ListSharedEndpointsResponsePrivate)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
