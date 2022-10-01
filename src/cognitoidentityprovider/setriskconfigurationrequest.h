// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRISKCONFIGURATIONREQUEST_H
#define QTAWS_SETRISKCONFIGURATIONREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetRiskConfigurationRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetRiskConfigurationRequest : public CognitoIdentityProviderRequest {

public:
    SetRiskConfigurationRequest(const SetRiskConfigurationRequest &other);
    SetRiskConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetRiskConfigurationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
