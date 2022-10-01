// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCERETENTIONSETTINGSREQUEST_P_H
#define QTAWS_PUTAPPINSTANCERETENTIONSETTINGSREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "putappinstanceretentionsettingsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class PutAppInstanceRetentionSettingsRequest;

class PutAppInstanceRetentionSettingsRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    PutAppInstanceRetentionSettingsRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   PutAppInstanceRetentionSettingsRequest * const q);
    PutAppInstanceRetentionSettingsRequestPrivate(const PutAppInstanceRetentionSettingsRequestPrivate &other,
                                   PutAppInstanceRetentionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppInstanceRetentionSettingsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
