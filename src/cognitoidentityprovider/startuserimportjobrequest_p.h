// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTUSERIMPORTJOBREQUEST_P_H
#define QTAWS_STARTUSERIMPORTJOBREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "startuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StartUserImportJobRequest;

class StartUserImportJobRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    StartUserImportJobRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   StartUserImportJobRequest * const q);
    StartUserImportJobRequestPrivate(const StartUserImportJobRequestPrivate &other,
                                   StartUserImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
