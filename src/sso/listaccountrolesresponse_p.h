// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTROLESRESPONSE_P_H
#define QTAWS_LISTACCOUNTROLESRESPONSE_P_H

#include "ssoresponse_p.h"

namespace QtAws {
namespace Sso {

class ListAccountRolesResponse;

class ListAccountRolesResponsePrivate : public SsoResponsePrivate {

public:

    explicit ListAccountRolesResponsePrivate(ListAccountRolesResponse * const q);

    void parseListAccountRolesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountRolesResponse)
    Q_DISABLE_COPY(ListAccountRolesResponsePrivate)

};

} // namespace Sso
} // namespace QtAws

#endif
