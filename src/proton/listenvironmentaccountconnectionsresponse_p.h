// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentAccountConnectionsResponse;

class ListEnvironmentAccountConnectionsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListEnvironmentAccountConnectionsResponsePrivate(ListEnvironmentAccountConnectionsResponse * const q);

    void parseListEnvironmentAccountConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentAccountConnectionsResponse)
    Q_DISABLE_COPY(ListEnvironmentAccountConnectionsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
