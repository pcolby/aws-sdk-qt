// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLCONFIGURATIONREQUEST_H
#define QTAWS_GETIDENTITYPOOLCONFIGURATIONREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetIdentityPoolConfigurationRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT GetIdentityPoolConfigurationRequest : public CognitoSyncRequest {

public:
    GetIdentityPoolConfigurationRequest(const GetIdentityPoolConfigurationRequest &other);
    GetIdentityPoolConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityPoolConfigurationRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
