// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRLRESPONSE_P_H
#define QTAWS_GETCRLRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class GetCrlResponse;

class GetCrlResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit GetCrlResponsePrivate(GetCrlResponse * const q);

    void parseGetCrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCrlResponse)
    Q_DISABLE_COPY(GetCrlResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
