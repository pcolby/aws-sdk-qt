// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRLSRESPONSE_P_H
#define QTAWS_LISTCRLSRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class ListCrlsResponse;

class ListCrlsResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit ListCrlsResponsePrivate(ListCrlsResponse * const q);

    void parseListCrlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCrlsResponse)
    Q_DISABLE_COPY(ListCrlsResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
