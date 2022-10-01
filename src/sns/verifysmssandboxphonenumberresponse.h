// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSMSSANDBOXPHONENUMBERRESPONSE_H
#define QTAWS_VERIFYSMSSANDBOXPHONENUMBERRESPONSE_H

#include "snsresponse.h"
#include "verifysmssandboxphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class VerifySMSSandboxPhoneNumberResponsePrivate;

class QTAWSSNS_EXPORT VerifySMSSandboxPhoneNumberResponse : public SnsResponse {
    Q_OBJECT

public:
    VerifySMSSandboxPhoneNumberResponse(const VerifySMSSandboxPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifySMSSandboxPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifySMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(VerifySMSSandboxPhoneNumberResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
