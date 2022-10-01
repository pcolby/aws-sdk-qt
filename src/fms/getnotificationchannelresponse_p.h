// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCHANNELRESPONSE_P_H
#define QTAWS_GETNOTIFICATIONCHANNELRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetNotificationChannelResponse;

class GetNotificationChannelResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetNotificationChannelResponsePrivate(GetNotificationChannelResponse * const q);

    void parseGetNotificationChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNotificationChannelResponse)
    Q_DISABLE_COPY(GetNotificationChannelResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
