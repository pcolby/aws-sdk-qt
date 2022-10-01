// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCHANNELRESPONSE_P_H
#define QTAWS_DELETENOTIFICATIONCHANNELRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class DeleteNotificationChannelResponse;

class DeleteNotificationChannelResponsePrivate : public FmsResponsePrivate {

public:

    explicit DeleteNotificationChannelResponsePrivate(DeleteNotificationChannelResponse * const q);

    void parseDeleteNotificationChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationChannelResponse)
    Q_DISABLE_COPY(DeleteNotificationChannelResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
