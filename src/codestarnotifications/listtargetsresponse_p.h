// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSRESPONSE_P_H
#define QTAWS_LISTTARGETSRESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class ListTargetsResponse;

class ListTargetsResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit ListTargetsResponsePrivate(ListTargetsResponse * const q);

    void parseListTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetsResponse)
    Q_DISABLE_COPY(ListTargetsResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
