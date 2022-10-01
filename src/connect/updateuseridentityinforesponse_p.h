// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERIDENTITYINFORESPONSE_P_H
#define QTAWS_UPDATEUSERIDENTITYINFORESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserIdentityInfoResponse;

class UpdateUserIdentityInfoResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserIdentityInfoResponsePrivate(UpdateUserIdentityInfoResponse * const q);

    void parseUpdateUserIdentityInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserIdentityInfoResponse)
    Q_DISABLE_COPY(UpdateUserIdentityInfoResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
