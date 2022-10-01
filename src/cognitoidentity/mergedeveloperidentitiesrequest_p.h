// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEDEVELOPERIDENTITIESREQUEST_P_H
#define QTAWS_MERGEDEVELOPERIDENTITIESREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "mergedeveloperidentitiesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class MergeDeveloperIdentitiesRequest;

class MergeDeveloperIdentitiesRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    MergeDeveloperIdentitiesRequestPrivate(const CognitoIdentityRequest::Action action,
                                   MergeDeveloperIdentitiesRequest * const q);
    MergeDeveloperIdentitiesRequestPrivate(const MergeDeveloperIdentitiesRequestPrivate &other,
                                   MergeDeveloperIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergeDeveloperIdentitiesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
