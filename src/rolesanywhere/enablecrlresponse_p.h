// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECRLRESPONSE_P_H
#define QTAWS_ENABLECRLRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableCrlResponse;

class EnableCrlResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit EnableCrlResponsePrivate(EnableCrlResponse * const q);

    void parseEnableCrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableCrlResponse)
    Q_DISABLE_COPY(EnableCrlResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
