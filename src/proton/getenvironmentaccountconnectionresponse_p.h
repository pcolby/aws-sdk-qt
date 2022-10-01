// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H
#define QTAWS_GETENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentAccountConnectionResponse;

class GetEnvironmentAccountConnectionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetEnvironmentAccountConnectionResponsePrivate(GetEnvironmentAccountConnectionResponse * const q);

    void parseGetEnvironmentAccountConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(GetEnvironmentAccountConnectionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
