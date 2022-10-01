// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINACCOUNTRESPONSE_P_H
#define QTAWS_GETADMINACCOUNTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetAdminAccountResponse;

class GetAdminAccountResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetAdminAccountResponsePrivate(GetAdminAccountResponse * const q);

    void parseGetAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAdminAccountResponse)
    Q_DISABLE_COPY(GetAdminAccountResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
