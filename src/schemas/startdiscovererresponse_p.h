// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDISCOVERERRESPONSE_P_H
#define QTAWS_STARTDISCOVERERRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class StartDiscovererResponse;

class StartDiscovererResponsePrivate : public SchemasResponsePrivate {

public:

    explicit StartDiscovererResponsePrivate(StartDiscovererResponse * const q);

    void parseStartDiscovererResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDiscovererResponse)
    Q_DISABLE_COPY(StartDiscovererResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
