// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTOUTPUTSRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTOUTPUTSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentOutputsResponse;

class ListEnvironmentOutputsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListEnvironmentOutputsResponsePrivate(ListEnvironmentOutputsResponse * const q);

    void parseListEnvironmentOutputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentOutputsResponse)
    Q_DISABLE_COPY(ListEnvironmentOutputsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
