// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSSANDBOXPHONENUMBERRESPONSE_H
#define QTAWS_DELETESMSSANDBOXPHONENUMBERRESPONSE_H

#include "snsresponse.h"
#include "deletesmssandboxphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class DeleteSMSSandboxPhoneNumberResponsePrivate;

class QTAWSSNS_EXPORT DeleteSMSSandboxPhoneNumberResponse : public SnsResponse {
    Q_OBJECT

public:
    DeleteSMSSandboxPhoneNumberResponse(const DeleteSMSSandboxPhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSMSSandboxPhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(DeleteSMSSandboxPhoneNumberResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
