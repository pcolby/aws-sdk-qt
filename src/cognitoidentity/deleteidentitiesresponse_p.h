// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITIESRESPONSE_P_H
#define QTAWS_DELETEIDENTITIESRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentitiesResponse;

class DeleteIdentitiesResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit DeleteIdentitiesResponsePrivate(DeleteIdentitiesResponse * const q);

    void parseDeleteIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIdentitiesResponse)
    Q_DISABLE_COPY(DeleteIdentitiesResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
