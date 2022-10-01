// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELRESPONSE_P_H
#define QTAWS_GETCHANNELRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class GetChannelResponse;

class GetChannelResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit GetChannelResponsePrivate(GetChannelResponse * const q);

    void parseGetChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelResponse)
    Q_DISABLE_COPY(GetChannelResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
