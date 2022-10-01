// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPHONECONFIGRESPONSE_P_H
#define QTAWS_UPDATEUSERPHONECONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserPhoneConfigResponse;

class UpdateUserPhoneConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserPhoneConfigResponsePrivate(UpdateUserPhoneConfigResponse * const q);

    void parseUpdateUserPhoneConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserPhoneConfigResponse)
    Q_DISABLE_COPY(UpdateUserPhoneConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
