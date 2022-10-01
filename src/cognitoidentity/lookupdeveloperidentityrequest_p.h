// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPDEVELOPERIDENTITYREQUEST_P_H
#define QTAWS_LOOKUPDEVELOPERIDENTITYREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "lookupdeveloperidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class LookupDeveloperIdentityRequest;

class LookupDeveloperIdentityRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    LookupDeveloperIdentityRequestPrivate(const CognitoIdentityRequest::Action action,
                                   LookupDeveloperIdentityRequest * const q);
    LookupDeveloperIdentityRequestPrivate(const LookupDeveloperIdentityRequestPrivate &other,
                                   LookupDeveloperIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(LookupDeveloperIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
