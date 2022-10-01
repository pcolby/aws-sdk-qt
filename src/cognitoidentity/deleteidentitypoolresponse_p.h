// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOOLRESPONSE_P_H
#define QTAWS_DELETEIDENTITYPOOLRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentityPoolResponse;

class DeleteIdentityPoolResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit DeleteIdentityPoolResponsePrivate(DeleteIdentityPoolResponse * const q);

    void parseDeleteIdentityPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityPoolResponse)
    Q_DISABLE_COPY(DeleteIdentityPoolResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
