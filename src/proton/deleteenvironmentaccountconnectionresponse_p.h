// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentAccountConnectionResponse;

class DeleteEnvironmentAccountConnectionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteEnvironmentAccountConnectionResponsePrivate(DeleteEnvironmentAccountConnectionResponse * const q);

    void parseDeleteEnvironmentAccountConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(DeleteEnvironmentAccountConnectionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
