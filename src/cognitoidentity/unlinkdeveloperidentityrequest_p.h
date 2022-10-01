// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLINKDEVELOPERIDENTITYREQUEST_P_H
#define QTAWS_UNLINKDEVELOPERIDENTITYREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "unlinkdeveloperidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class UnlinkDeveloperIdentityRequest;

class UnlinkDeveloperIdentityRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    UnlinkDeveloperIdentityRequestPrivate(const CognitoIdentityRequest::Action action,
                                   UnlinkDeveloperIdentityRequest * const q);
    UnlinkDeveloperIdentityRequestPrivate(const UnlinkDeveloperIdentityRequestPrivate &other,
                                   UnlinkDeveloperIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnlinkDeveloperIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
