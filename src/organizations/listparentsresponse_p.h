// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARENTSRESPONSE_P_H
#define QTAWS_LISTPARENTSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListParentsResponse;

class ListParentsResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListParentsResponsePrivate(ListParentsResponse * const q);

    void parseListParentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListParentsResponse)
    Q_DISABLE_COPY(ListParentsResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
