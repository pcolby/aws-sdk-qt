// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentAccountConnectionResponse;

class UpdateEnvironmentAccountConnectionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateEnvironmentAccountConnectionResponsePrivate(UpdateEnvironmentAccountConnectionResponse * const q);

    void parseUpdateEnvironmentAccountConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(UpdateEnvironmentAccountConnectionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
