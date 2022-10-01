// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDELEGATEDADMINACCOUNTRESPONSE_P_H
#define QTAWS_DISABLEDELEGATEDADMINACCOUNTRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class DisableDelegatedAdminAccountResponse;

class DisableDelegatedAdminAccountResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit DisableDelegatedAdminAccountResponsePrivate(DisableDelegatedAdminAccountResponse * const q);

    void parseDisableDelegatedAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableDelegatedAdminAccountResponse)
    Q_DISABLE_COPY(DisableDelegatedAdminAccountResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
