// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLCONFIGURATIONRESPONSE_H
#define QTAWS_GETIDENTITYPOOLCONFIGURATIONRESPONSE_H

#include "cognitosyncresponse.h"
#include "getidentitypoolconfigurationrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetIdentityPoolConfigurationResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT GetIdentityPoolConfigurationResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    GetIdentityPoolConfigurationResponse(const GetIdentityPoolConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityPoolConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityPoolConfigurationResponse)
    Q_DISABLE_COPY(GetIdentityPoolConfigurationResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
