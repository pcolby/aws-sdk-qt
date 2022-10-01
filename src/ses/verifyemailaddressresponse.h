// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILADDRESSRESPONSE_H
#define QTAWS_VERIFYEMAILADDRESSRESPONSE_H

#include "sesresponse.h"
#include "verifyemailaddressrequest.h"

namespace QtAws {
namespace Ses {

class VerifyEmailAddressResponsePrivate;

class QTAWSSES_EXPORT VerifyEmailAddressResponse : public SesResponse {
    Q_OBJECT

public:
    VerifyEmailAddressResponse(const VerifyEmailAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyEmailAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyEmailAddressResponse)
    Q_DISABLE_COPY(VerifyEmailAddressResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
