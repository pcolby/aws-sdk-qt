// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDRESPONSE_P_H
#define QTAWS_GETIDRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdResponse;

class GetIdResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit GetIdResponsePrivate(GetIdResponse * const q);

    void parseGetIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdResponse)
    Q_DISABLE_COPY(GetIdResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
