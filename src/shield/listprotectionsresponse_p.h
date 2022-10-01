// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONSRESPONSE_P_H
#define QTAWS_LISTPROTECTIONSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class ListProtectionsResponse;

class ListProtectionsResponsePrivate : public ShieldResponsePrivate {

public:

    explicit ListProtectionsResponsePrivate(ListProtectionsResponse * const q);

    void parseListProtectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProtectionsResponse)
    Q_DISABLE_COPY(ListProtectionsResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
