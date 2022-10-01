// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUICUSTOMIZATIONRESPONSE_H
#define QTAWS_GETUICUSTOMIZATIONRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getuicustomizationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUICustomizationResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUICustomizationResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetUICustomizationResponse(const GetUICustomizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUICustomizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUICustomizationResponse)
    Q_DISABLE_COPY(GetUICustomizationResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
