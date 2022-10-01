// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLECREDENTIALSRESPONSE_H
#define QTAWS_GETROLECREDENTIALSRESPONSE_H

#include "ssoresponse.h"
#include "getrolecredentialsrequest.h"

namespace QtAws {
namespace Sso {

class GetRoleCredentialsResponsePrivate;

class QTAWSSSO_EXPORT GetRoleCredentialsResponse : public SsoResponse {
    Q_OBJECT

public:
    GetRoleCredentialsResponse(const GetRoleCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRoleCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoleCredentialsResponse)
    Q_DISABLE_COPY(GetRoleCredentialsResponse)

};

} // namespace Sso
} // namespace QtAws

#endif
