// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONSRESPONSE_P_H
#define QTAWS_LISTNOTIFICATIONSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListNotificationsResponse;

class ListNotificationsResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListNotificationsResponsePrivate(ListNotificationsResponse * const q);

    void parseListNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNotificationsResponse)
    Q_DISABLE_COPY(ListNotificationsResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
