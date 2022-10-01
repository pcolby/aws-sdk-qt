// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSMSSANDBOXPHONENUMBERREQUEST_H
#define QTAWS_VERIFYSMSSANDBOXPHONENUMBERREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class VerifySMSSandboxPhoneNumberRequestPrivate;

class QTAWSSNS_EXPORT VerifySMSSandboxPhoneNumberRequest : public SnsRequest {

public:
    VerifySMSSandboxPhoneNumberRequest(const VerifySMSSandboxPhoneNumberRequest &other);
    VerifySMSSandboxPhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifySMSSandboxPhoneNumberRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
