// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADMCHANNELRESPONSE_P_H
#define QTAWS_DELETEADMCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteAdmChannelResponse;

class DeleteAdmChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteAdmChannelResponsePrivate(DeleteAdmChannelResponse * const q);

    void parseDeleteAdmChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAdmChannelResponse)
    Q_DISABLE_COPY(DeleteAdmChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
