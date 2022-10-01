// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINISTRATORSRESPONSE_P_H
#define QTAWS_LISTDELEGATEDADMINISTRATORSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedAdministratorsResponse;

class ListDelegatedAdministratorsResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListDelegatedAdministratorsResponsePrivate(ListDelegatedAdministratorsResponse * const q);

    void parseListDelegatedAdministratorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDelegatedAdministratorsResponse)
    Q_DISABLE_COPY(ListDelegatedAdministratorsResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
