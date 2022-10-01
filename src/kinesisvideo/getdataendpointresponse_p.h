// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAENDPOINTRESPONSE_P_H
#define QTAWS_GETDATAENDPOINTRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class GetDataEndpointResponse;

class GetDataEndpointResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit GetDataEndpointResponsePrivate(GetDataEndpointResponse * const q);

    void parseGetDataEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataEndpointResponse)
    Q_DISABLE_COPY(GetDataEndpointResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
