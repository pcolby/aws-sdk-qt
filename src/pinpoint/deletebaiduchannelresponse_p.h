// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBAIDUCHANNELRESPONSE_P_H
#define QTAWS_DELETEBAIDUCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteBaiduChannelResponse;

class DeleteBaiduChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteBaiduChannelResponsePrivate(DeleteBaiduChannelResponse * const q);

    void parseDeleteBaiduChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBaiduChannelResponse)
    Q_DISABLE_COPY(DeleteBaiduChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
