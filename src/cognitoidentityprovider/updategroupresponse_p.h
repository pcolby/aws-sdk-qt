// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPRESPONSE_P_H
#define QTAWS_UPDATEGROUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateGroupResponse;

class UpdateGroupResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateGroupResponsePrivate(UpdateGroupResponse * const q);

    void parseUpdateGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGroupResponse)
    Q_DISABLE_COPY(UpdateGroupResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
