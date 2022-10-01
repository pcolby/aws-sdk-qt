// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLCONFIGURATIONREQUEST_P_H
#define QTAWS_GETIDENTITYPOOLCONFIGURATIONREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "getidentitypoolconfigurationrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetIdentityPoolConfigurationRequest;

class GetIdentityPoolConfigurationRequestPrivate : public CognitoSyncRequestPrivate {

public:
    GetIdentityPoolConfigurationRequestPrivate(const CognitoSyncRequest::Action action,
                                   GetIdentityPoolConfigurationRequest * const q);
    GetIdentityPoolConfigurationRequestPrivate(const GetIdentityPoolConfigurationRequestPrivate &other,
                                   GetIdentityPoolConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoolConfigurationRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
