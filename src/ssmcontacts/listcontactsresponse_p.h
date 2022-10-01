// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSRESPONSE_P_H
#define QTAWS_LISTCONTACTSRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class ListContactsResponse;

class ListContactsResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit ListContactsResponsePrivate(ListContactsResponse * const q);

    void parseListContactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactsResponse)
    Q_DISABLE_COPY(ListContactsResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
