// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTLISTSRESPONSE_P_H
#define QTAWS_LISTCONTACTLISTSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class ListContactListsResponse;

class ListContactListsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit ListContactListsResponsePrivate(ListContactListsResponse * const q);

    void parseListContactListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactListsResponse)
    Q_DISABLE_COPY(ListContactListsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
