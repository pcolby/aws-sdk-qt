// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINISTRATORACCOUNTRESPONSE_P_H
#define QTAWS_GETADMINISTRATORACCOUNTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetAdministratorAccountResponse;

class GetAdministratorAccountResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetAdministratorAccountResponsePrivate(GetAdministratorAccountResponse * const q);

    void parseGetAdministratorAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAdministratorAccountResponse)
    Q_DISABLE_COPY(GetAdministratorAccountResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
