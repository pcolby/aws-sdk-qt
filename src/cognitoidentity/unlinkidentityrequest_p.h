// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLINKIDENTITYREQUEST_P_H
#define QTAWS_UNLINKIDENTITYREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "unlinkidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class UnlinkIdentityRequest;

class UnlinkIdentityRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    UnlinkIdentityRequestPrivate(const CognitoIdentityRequest::Action action,
                                   UnlinkIdentityRequest * const q);
    UnlinkIdentityRequestPrivate(const UnlinkIdentityRequestPrivate &other,
                                   UnlinkIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnlinkIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
