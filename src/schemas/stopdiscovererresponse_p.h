// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDISCOVERERRESPONSE_P_H
#define QTAWS_STOPDISCOVERERRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class StopDiscovererResponse;

class StopDiscovererResponsePrivate : public SchemasResponsePrivate {

public:

    explicit StopDiscovererResponsePrivate(StopDiscovererResponse * const q);

    void parseStopDiscovererResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDiscovererResponse)
    Q_DISABLE_COPY(StopDiscovererResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
