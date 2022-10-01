// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRISKCONFIGURATIONRESPONSE_P_H
#define QTAWS_SETRISKCONFIGURATIONRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetRiskConfigurationResponse;

class SetRiskConfigurationResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit SetRiskConfigurationResponsePrivate(SetRiskConfigurationResponse * const q);

    void parseSetRiskConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetRiskConfigurationResponse)
    Q_DISABLE_COPY(SetRiskConfigurationResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
