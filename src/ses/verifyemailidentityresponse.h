// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILIDENTITYRESPONSE_H
#define QTAWS_VERIFYEMAILIDENTITYRESPONSE_H

#include "sesresponse.h"
#include "verifyemailidentityrequest.h"

namespace QtAws {
namespace Ses {

class VerifyEmailIdentityResponsePrivate;

class QTAWSSES_EXPORT VerifyEmailIdentityResponse : public SesResponse {
    Q_OBJECT

public:
    VerifyEmailIdentityResponse(const VerifyEmailIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyEmailIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyEmailIdentityResponse)
    Q_DISABLE_COPY(VerifyEmailIdentityResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
