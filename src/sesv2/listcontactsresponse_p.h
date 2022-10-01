// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSRESPONSE_P_H
#define QTAWS_LISTCONTACTSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class ListContactsResponse;

class ListContactsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit ListContactsResponsePrivate(ListContactsResponse * const q);

    void parseListContactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactsResponse)
    Q_DISABLE_COPY(ListContactsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
