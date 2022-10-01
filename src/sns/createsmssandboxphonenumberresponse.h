// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSSANDBOXPHONENUMBERRESPONSE_H
#define QTAWS_CREATESMSSANDBOXPHONENUMBERRESPONSE_H

#include "snsresponse.h"
#include "createsmssandboxphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class CreateSMSSandboxPhoneNumberResponsePrivate;

class QTAWSSNS_EXPORT CreateSMSSandboxPhoneNumberResponse : public SnsResponse {
    Q_OBJECT

public:
    CreateSMSSandboxPhoneNumberResponse(const CreateSMSSandboxPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSMSSandboxPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(CreateSMSSandboxPhoneNumberResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
