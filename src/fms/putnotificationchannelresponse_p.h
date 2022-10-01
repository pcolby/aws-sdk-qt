// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCHANNELRESPONSE_P_H
#define QTAWS_PUTNOTIFICATIONCHANNELRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class PutNotificationChannelResponse;

class PutNotificationChannelResponsePrivate : public FmsResponsePrivate {

public:

    explicit PutNotificationChannelResponsePrivate(PutNotificationChannelResponse * const q);

    void parsePutNotificationChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutNotificationChannelResponse)
    Q_DISABLE_COPY(PutNotificationChannelResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
