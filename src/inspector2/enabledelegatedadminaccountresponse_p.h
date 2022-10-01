// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDELEGATEDADMINACCOUNTRESPONSE_P_H
#define QTAWS_ENABLEDELEGATEDADMINACCOUNTRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class EnableDelegatedAdminAccountResponse;

class EnableDelegatedAdminAccountResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit EnableDelegatedAdminAccountResponsePrivate(EnableDelegatedAdminAccountResponse * const q);

    void parseEnableDelegatedAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableDelegatedAdminAccountResponse)
    Q_DISABLE_COPY(EnableDelegatedAdminAccountResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
