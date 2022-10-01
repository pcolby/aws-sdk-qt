// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETICESERVERCONFIGRESPONSE_P_H
#define QTAWS_GETICESERVERCONFIGRESPONSE_P_H

#include "kinesisvideosignalingresponse_p.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class GetIceServerConfigResponse;

class GetIceServerConfigResponsePrivate : public KinesisVideoSignalingResponsePrivate {

public:

    explicit GetIceServerConfigResponsePrivate(GetIceServerConfigResponse * const q);

    void parseGetIceServerConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIceServerConfigResponse)
    Q_DISABLE_COPY(GetIceServerConfigResponsePrivate)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
