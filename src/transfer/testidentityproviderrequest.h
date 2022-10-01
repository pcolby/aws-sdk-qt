// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTIDENTITYPROVIDERREQUEST_H
#define QTAWS_TESTIDENTITYPROVIDERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class TestIdentityProviderRequestPrivate;

class QTAWSTRANSFER_EXPORT TestIdentityProviderRequest : public TransferRequest {

public:
    TestIdentityProviderRequest(const TestIdentityProviderRequest &other);
    TestIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestIdentityProviderRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
