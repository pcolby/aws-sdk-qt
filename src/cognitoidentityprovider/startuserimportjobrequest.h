// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTUSERIMPORTJOBREQUEST_H
#define QTAWS_STARTUSERIMPORTJOBREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StartUserImportJobRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT StartUserImportJobRequest : public CognitoIdentityProviderRequest {

public:
    StartUserImportJobRequest(const StartUserImportJobRequest &other);
    StartUserImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
