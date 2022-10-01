// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_TESTIDENTITYPROVIDERREQUEST_P_H

#include "transferrequest_p.h"
#include "testidentityproviderrequest.h"

namespace QtAws {
namespace Transfer {

class TestIdentityProviderRequest;

class TestIdentityProviderRequestPrivate : public TransferRequestPrivate {

public:
    TestIdentityProviderRequestPrivate(const TransferRequest::Action action,
                                   TestIdentityProviderRequest * const q);
    TestIdentityProviderRequestPrivate(const TestIdentityProviderRequestPrivate &other,
                                   TestIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestIdentityProviderRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
