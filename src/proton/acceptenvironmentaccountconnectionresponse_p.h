// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H
#define QTAWS_ACCEPTENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class AcceptEnvironmentAccountConnectionResponse;

class AcceptEnvironmentAccountConnectionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit AcceptEnvironmentAccountConnectionResponsePrivate(AcceptEnvironmentAccountConnectionResponse * const q);

    void parseAcceptEnvironmentAccountConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(AcceptEnvironmentAccountConnectionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
