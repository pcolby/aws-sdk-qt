// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLIENTRESPONSE_H
#define QTAWS_REGISTERCLIENTRESPONSE_H

#include "ssooidcresponse.h"
#include "registerclientrequest.h"

namespace QtAws {
namespace SsoOidc {

class RegisterClientResponsePrivate;

class QTAWSSSOOIDC_EXPORT RegisterClientResponse : public SsoOidcResponse {
    Q_OBJECT

public:
    RegisterClientResponse(const RegisterClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterClientResponse)
    Q_DISABLE_COPY(RegisterClientResponse)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
