// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERIDRESPONSE_P_H
#define QTAWS_GETUSERIDRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class GetUserIdResponse;

class GetUserIdResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit GetUserIdResponsePrivate(GetUserIdResponse * const q);

    void parseGetUserIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserIdResponse)
    Q_DISABLE_COPY(GetUserIdResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
