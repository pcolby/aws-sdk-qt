// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLCONFIGURATIONRESPONSE_P_H
#define QTAWS_SETIDENTITYPOOLCONFIGURATIONRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class SetIdentityPoolConfigurationResponse;

class SetIdentityPoolConfigurationResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit SetIdentityPoolConfigurationResponsePrivate(SetIdentityPoolConfigurationResponse * const q);

    void parseSetIdentityPoolConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityPoolConfigurationResponse)
    Q_DISABLE_COPY(SetIdentityPoolConfigurationResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
