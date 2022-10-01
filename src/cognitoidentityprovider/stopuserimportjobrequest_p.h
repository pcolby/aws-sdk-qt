// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPUSERIMPORTJOBREQUEST_P_H
#define QTAWS_STOPUSERIMPORTJOBREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "stopuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StopUserImportJobRequest;

class StopUserImportJobRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    StopUserImportJobRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   StopUserImportJobRequest * const q);
    StopUserImportJobRequestPrivate(const StopUserImportJobRequestPrivate &other,
                                   StopUserImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
