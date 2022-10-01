// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLUSAGEREQUEST_P_H
#define QTAWS_LISTIDENTITYPOOLUSAGEREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "listidentitypoolusagerequest.h"

namespace QtAws {
namespace CognitoSync {

class ListIdentityPoolUsageRequest;

class ListIdentityPoolUsageRequestPrivate : public CognitoSyncRequestPrivate {

public:
    ListIdentityPoolUsageRequestPrivate(const CognitoSyncRequest::Action action,
                                   ListIdentityPoolUsageRequest * const q);
    ListIdentityPoolUsageRequestPrivate(const ListIdentityPoolUsageRequestPrivate &other,
                                   ListIdentityPoolUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoolUsageRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
