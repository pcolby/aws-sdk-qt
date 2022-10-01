// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERIMPORTJOBREQUEST_H
#define QTAWS_CREATEUSERIMPORTJOBREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserImportJobRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateUserImportJobRequest : public CognitoIdentityProviderRequest {

public:
    CreateUserImportJobRequest(const CreateUserImportJobRequest &other);
    CreateUserImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
