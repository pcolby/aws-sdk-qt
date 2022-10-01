// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEUSERIMPORTJOBREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "createuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserImportJobRequest;

class CreateUserImportJobRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    CreateUserImportJobRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   CreateUserImportJobRequest * const q);
    CreateUserImportJobRequestPrivate(const CreateUserImportJobRequestPrivate &other,
                                   CreateUserImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
