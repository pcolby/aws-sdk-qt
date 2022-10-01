// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTTEMPLATEVERSIONSRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTTEMPLATEVERSIONSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentTemplateVersionsResponse;

class ListEnvironmentTemplateVersionsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListEnvironmentTemplateVersionsResponsePrivate(ListEnvironmentTemplateVersionsResponse * const q);

    void parseListEnvironmentTemplateVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentTemplateVersionsResponse)
    Q_DISABLE_COPY(ListEnvironmentTemplateVersionsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
