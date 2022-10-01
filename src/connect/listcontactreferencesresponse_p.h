// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTREFERENCESRESPONSE_P_H
#define QTAWS_LISTCONTACTREFERENCESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListContactReferencesResponse;

class ListContactReferencesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListContactReferencesResponsePrivate(ListContactReferencesResponse * const q);

    void parseListContactReferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactReferencesResponse)
    Q_DISABLE_COPY(ListContactReferencesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
