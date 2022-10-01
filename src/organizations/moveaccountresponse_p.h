// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEACCOUNTRESPONSE_P_H
#define QTAWS_MOVEACCOUNTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class MoveAccountResponse;

class MoveAccountResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit MoveAccountResponsePrivate(MoveAccountResponse * const q);

    void parseMoveAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MoveAccountResponse)
    Q_DISABLE_COPY(MoveAccountResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
