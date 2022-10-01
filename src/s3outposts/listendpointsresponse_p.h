// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSRESPONSE_P_H
#define QTAWS_LISTENDPOINTSRESPONSE_P_H

#include "s3outpostsresponse_p.h"

namespace QtAws {
namespace S3Outposts {

class ListEndpointsResponse;

class ListEndpointsResponsePrivate : public S3OutpostsResponsePrivate {

public:

    explicit ListEndpointsResponsePrivate(ListEndpointsResponse * const q);

    void parseListEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEndpointsResponse)
    Q_DISABLE_COPY(ListEndpointsResponsePrivate)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
