// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPRESPONSE_P_H
#define QTAWS_DELETEGROUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteGroupResponse;

class DeleteGroupResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DeleteGroupResponsePrivate(DeleteGroupResponse * const q);

    void parseDeleteGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGroupResponse)
    Q_DISABLE_COPY(DeleteGroupResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
