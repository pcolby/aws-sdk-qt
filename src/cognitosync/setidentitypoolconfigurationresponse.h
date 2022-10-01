// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLCONFIGURATIONRESPONSE_H
#define QTAWS_SETIDENTITYPOOLCONFIGURATIONRESPONSE_H

#include "cognitosyncresponse.h"
#include "setidentitypoolconfigurationrequest.h"

namespace QtAws {
namespace CognitoSync {

class SetIdentityPoolConfigurationResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT SetIdentityPoolConfigurationResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    SetIdentityPoolConfigurationResponse(const SetIdentityPoolConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityPoolConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityPoolConfigurationResponse)
    Q_DISABLE_COPY(SetIdentityPoolConfigurationResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
