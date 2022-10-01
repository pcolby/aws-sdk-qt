// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTTEMPLATESRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTTEMPLATESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentTemplatesResponse;

class ListEnvironmentTemplatesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListEnvironmentTemplatesResponsePrivate(ListEnvironmentTemplatesResponse * const q);

    void parseListEnvironmentTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentTemplatesResponse)
    Q_DISABLE_COPY(ListEnvironmentTemplatesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
