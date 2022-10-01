// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLCONFIGURATIONREQUEST_P_H
#define QTAWS_SETIDENTITYPOOLCONFIGURATIONREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "setidentitypoolconfigurationrequest.h"

namespace QtAws {
namespace CognitoSync {

class SetIdentityPoolConfigurationRequest;

class SetIdentityPoolConfigurationRequestPrivate : public CognitoSyncRequestPrivate {

public:
    SetIdentityPoolConfigurationRequestPrivate(const CognitoSyncRequest::Action action,
                                   SetIdentityPoolConfigurationRequest * const q);
    SetIdentityPoolConfigurationRequestPrivate(const SetIdentityPoolConfigurationRequestPrivate &other,
                                   SetIdentityPoolConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityPoolConfigurationRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
