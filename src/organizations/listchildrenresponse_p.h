// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHILDRENRESPONSE_P_H
#define QTAWS_LISTCHILDRENRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListChildrenResponse;

class ListChildrenResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListChildrenResponsePrivate(ListChildrenResponse * const q);

    void parseListChildrenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChildrenResponse)
    Q_DISABLE_COPY(ListChildrenResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
