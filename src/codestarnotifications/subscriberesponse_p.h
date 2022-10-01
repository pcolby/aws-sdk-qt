// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBERESPONSE_P_H
#define QTAWS_SUBSCRIBERESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class SubscribeResponse;

class SubscribeResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit SubscribeResponsePrivate(SubscribeResponse * const q);

    void parseSubscribeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubscribeResponse)
    Q_DISABLE_COPY(SubscribeResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
