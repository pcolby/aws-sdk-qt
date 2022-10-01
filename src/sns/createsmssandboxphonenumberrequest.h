// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSSANDBOXPHONENUMBERREQUEST_H
#define QTAWS_CREATESMSSANDBOXPHONENUMBERREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class CreateSMSSandboxPhoneNumberRequestPrivate;

class QTAWSSNS_EXPORT CreateSMSSandboxPhoneNumberRequest : public SnsRequest {

public:
    CreateSMSSandboxPhoneNumberRequest(const CreateSMSSandboxPhoneNumberRequest &other);
    CreateSMSSandboxPhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSMSSandboxPhoneNumberRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
