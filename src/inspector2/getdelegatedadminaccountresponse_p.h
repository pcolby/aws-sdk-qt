// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATEDADMINACCOUNTRESPONSE_P_H
#define QTAWS_GETDELEGATEDADMINACCOUNTRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class GetDelegatedAdminAccountResponse;

class GetDelegatedAdminAccountResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit GetDelegatedAdminAccountResponsePrivate(GetDelegatedAdminAccountResponse * const q);

    void parseGetDelegatedAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDelegatedAdminAccountResponse)
    Q_DISABLE_COPY(GetDelegatedAdminAccountResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
