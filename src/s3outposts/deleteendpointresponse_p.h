// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTRESPONSE_P_H
#define QTAWS_DELETEENDPOINTRESPONSE_P_H

#include "s3outpostsresponse_p.h"

namespace QtAws {
namespace S3Outposts {

class DeleteEndpointResponse;

class DeleteEndpointResponsePrivate : public S3OutpostsResponsePrivate {

public:

    explicit DeleteEndpointResponsePrivate(DeleteEndpointResponse * const q);

    void parseDeleteEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointResponse)
    Q_DISABLE_COPY(DeleteEndpointResponsePrivate)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
