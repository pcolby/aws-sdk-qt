// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCERETENTIONSETTINGSREQUEST_P_H
#define QTAWS_GETAPPINSTANCERETENTIONSETTINGSREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "getappinstanceretentionsettingsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class GetAppInstanceRetentionSettingsRequest;

class GetAppInstanceRetentionSettingsRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    GetAppInstanceRetentionSettingsRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   GetAppInstanceRetentionSettingsRequest * const q);
    GetAppInstanceRetentionSettingsRequestPrivate(const GetAppInstanceRetentionSettingsRequestPrivate &other,
                                   GetAppInstanceRetentionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppInstanceRetentionSettingsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
