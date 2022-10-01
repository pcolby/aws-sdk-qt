// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRLRESPONSE_P_H
#define QTAWS_UPDATECRLRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateCrlResponse;

class UpdateCrlResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit UpdateCrlResponsePrivate(UpdateCrlResponse * const q);

    void parseUpdateCrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCrlResponse)
    Q_DISABLE_COPY(UpdateCrlResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
