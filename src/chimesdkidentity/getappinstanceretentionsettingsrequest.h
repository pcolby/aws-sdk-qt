// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCERETENTIONSETTINGSREQUEST_H
#define QTAWS_GETAPPINSTANCERETENTIONSETTINGSREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class GetAppInstanceRetentionSettingsRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT GetAppInstanceRetentionSettingsRequest : public ChimeSdkIdentityRequest {

public:
    GetAppInstanceRetentionSettingsRequest(const GetAppInstanceRetentionSettingsRequest &other);
    GetAppInstanceRetentionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppInstanceRetentionSettingsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
