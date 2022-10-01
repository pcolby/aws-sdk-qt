// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALSIGNOUTREQUEST_P_H
#define QTAWS_GLOBALSIGNOUTREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "globalsignoutrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GlobalSignOutRequest;

class GlobalSignOutRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GlobalSignOutRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GlobalSignOutRequest * const q);
    GlobalSignOutRequestPrivate(const GlobalSignOutRequestPrivate &other,
                                   GlobalSignOutRequest * const q);

private:
    Q_DECLARE_PUBLIC(GlobalSignOutRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
