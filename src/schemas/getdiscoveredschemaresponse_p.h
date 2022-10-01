// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDSCHEMARESPONSE_P_H
#define QTAWS_GETDISCOVEREDSCHEMARESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class GetDiscoveredSchemaResponse;

class GetDiscoveredSchemaResponsePrivate : public SchemasResponsePrivate {

public:

    explicit GetDiscoveredSchemaResponsePrivate(GetDiscoveredSchemaResponse * const q);

    void parseGetDiscoveredSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDiscoveredSchemaResponse)
    Q_DISABLE_COPY(GetDiscoveredSchemaResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
