// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDREQUEST_P_H
#define QTAWS_GETIDREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "getidrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdRequest;

class GetIdRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    GetIdRequestPrivate(const CognitoIdentityRequest::Action action,
                                   GetIdRequest * const q);
    GetIdRequestPrivate(const GetIdRequestPrivate &other,
                                   GetIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
