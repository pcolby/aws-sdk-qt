// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLCONFIGURATIONREQUEST_H
#define QTAWS_SETIDENTITYPOOLCONFIGURATIONREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class SetIdentityPoolConfigurationRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT SetIdentityPoolConfigurationRequest : public CognitoSyncRequest {

public:
    SetIdentityPoolConfigurationRequest(const SetIdentityPoolConfigurationRequest &other);
    SetIdentityPoolConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityPoolConfigurationRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
