// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEACCOUNTRESPONSE_P_H
#define QTAWS_CLOSEACCOUNTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class CloseAccountResponse;

class CloseAccountResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit CloseAccountResponsePrivate(CloseAccountResponse * const q);

    void parseCloseAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloseAccountResponse)
    Q_DISABLE_COPY(CloseAccountResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
