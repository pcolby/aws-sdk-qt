// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTYPESRESPONSE_P_H
#define QTAWS_LISTEVENTTYPESRESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class ListEventTypesResponse;

class ListEventTypesResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit ListEventTypesResponsePrivate(ListEventTypesResponse * const q);

    void parseListEventTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventTypesResponse)
    Q_DISABLE_COPY(ListEventTypesResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
