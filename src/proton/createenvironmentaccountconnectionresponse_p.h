// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentAccountConnectionResponse;

class CreateEnvironmentAccountConnectionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateEnvironmentAccountConnectionResponsePrivate(CreateEnvironmentAccountConnectionResponse * const q);

    void parseCreateEnvironmentAccountConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(CreateEnvironmentAccountConnectionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
