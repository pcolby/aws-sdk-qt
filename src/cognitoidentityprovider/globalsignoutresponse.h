// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALSIGNOUTRESPONSE_H
#define QTAWS_GLOBALSIGNOUTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "globalsignoutrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GlobalSignOutResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GlobalSignOutResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GlobalSignOutResponse(const GlobalSignOutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GlobalSignOutRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlobalSignOutResponse)
    Q_DISABLE_COPY(GlobalSignOutResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
