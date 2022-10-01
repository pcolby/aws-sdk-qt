// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_TESTIDENTITYPROVIDERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class TestIdentityProviderResponse;

class TestIdentityProviderResponsePrivate : public TransferResponsePrivate {

public:

    explicit TestIdentityProviderResponsePrivate(TestIdentityProviderResponse * const q);

    void parseTestIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestIdentityProviderResponse)
    Q_DISABLE_COPY(TestIdentityProviderResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
