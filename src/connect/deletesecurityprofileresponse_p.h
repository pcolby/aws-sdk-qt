// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYPROFILERESPONSE_P_H
#define QTAWS_DELETESECURITYPROFILERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteSecurityProfileResponse;

class DeleteSecurityProfileResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteSecurityProfileResponsePrivate(DeleteSecurityProfileResponse * const q);

    void parseDeleteSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityProfileResponse)
    Q_DISABLE_COPY(DeleteSecurityProfileResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
