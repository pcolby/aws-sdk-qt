// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROFILERESPONSE_P_H
#define QTAWS_DISABLEPROFILERESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableProfileResponse;

class DisableProfileResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit DisableProfileResponsePrivate(DisableProfileResponse * const q);

    void parseDisableProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableProfileResponse)
    Q_DISABLE_COPY(DisableProfileResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
