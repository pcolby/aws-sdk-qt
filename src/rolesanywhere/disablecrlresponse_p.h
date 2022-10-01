// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECRLRESPONSE_P_H
#define QTAWS_DISABLECRLRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableCrlResponse;

class DisableCrlResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit DisableCrlResponsePrivate(DisableCrlResponse * const q);

    void parseDisableCrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableCrlResponse)
    Q_DISABLE_COPY(DisableCrlResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
