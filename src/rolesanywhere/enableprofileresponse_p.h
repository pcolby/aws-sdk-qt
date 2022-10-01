// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROFILERESPONSE_P_H
#define QTAWS_ENABLEPROFILERESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableProfileResponse;

class EnableProfileResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit EnableProfileResponsePrivate(EnableProfileResponse * const q);

    void parseEnableProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableProfileResponse)
    Q_DISABLE_COPY(EnableProfileResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
