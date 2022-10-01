// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTIDENTITYPROVIDERRESPONSE_H
#define QTAWS_TESTIDENTITYPROVIDERRESPONSE_H

#include "transferresponse.h"
#include "testidentityproviderrequest.h"

namespace QtAws {
namespace Transfer {

class TestIdentityProviderResponsePrivate;

class QTAWSTRANSFER_EXPORT TestIdentityProviderResponse : public TransferResponse {
    Q_OBJECT

public:
    TestIdentityProviderResponse(const TestIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestIdentityProviderResponse)
    Q_DISABLE_COPY(TestIdentityProviderResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
