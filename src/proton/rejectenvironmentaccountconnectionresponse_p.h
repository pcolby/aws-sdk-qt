// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H
#define QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class RejectEnvironmentAccountConnectionResponse;

class RejectEnvironmentAccountConnectionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit RejectEnvironmentAccountConnectionResponsePrivate(RejectEnvironmentAccountConnectionResponse * const q);

    void parseRejectEnvironmentAccountConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(RejectEnvironmentAccountConnectionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
