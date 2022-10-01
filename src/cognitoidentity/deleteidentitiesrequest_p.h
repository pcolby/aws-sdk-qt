// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITIESREQUEST_P_H
#define QTAWS_DELETEIDENTITIESREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "deleteidentitiesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentitiesRequest;

class DeleteIdentitiesRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    DeleteIdentitiesRequestPrivate(const CognitoIdentityRequest::Action action,
                                   DeleteIdentitiesRequest * const q);
    DeleteIdentitiesRequestPrivate(const DeleteIdentitiesRequestPrivate &other,
                                   DeleteIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIdentitiesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
