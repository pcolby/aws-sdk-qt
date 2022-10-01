// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLESRESPONSE_P_H
#define QTAWS_LISTROLESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListRolesResponse;

class ListRolesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListRolesResponsePrivate(ListRolesResponse * const q);

    void parseListRolesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRolesResponse)
    Q_DISABLE_COPY(ListRolesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
