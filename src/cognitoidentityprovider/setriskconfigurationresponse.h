// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRISKCONFIGURATIONRESPONSE_H
#define QTAWS_SETRISKCONFIGURATIONRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "setriskconfigurationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetRiskConfigurationResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetRiskConfigurationResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    SetRiskConfigurationResponse(const SetRiskConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetRiskConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetRiskConfigurationResponse)
    Q_DISABLE_COPY(SetRiskConfigurationResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
