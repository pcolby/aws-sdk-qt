// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETIDENTITYPOOLCONFIGURATIONRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class GetIdentityPoolConfigurationResponse;

class GetIdentityPoolConfigurationResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit GetIdentityPoolConfigurationResponsePrivate(GetIdentityPoolConfigurationResponse * const q);

    void parseGetIdentityPoolConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoolConfigurationResponse)
    Q_DISABLE_COPY(GetIdentityPoolConfigurationResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
