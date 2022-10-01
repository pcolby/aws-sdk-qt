// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYSCHEMAVERSIONMETADATARESPONSE_P_H
#define QTAWS_QUERYSCHEMAVERSIONMETADATARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class QuerySchemaVersionMetadataResponse;

class QuerySchemaVersionMetadataResponsePrivate : public GlueResponsePrivate {

public:

    explicit QuerySchemaVersionMetadataResponsePrivate(QuerySchemaVersionMetadataResponse * const q);

    void parseQuerySchemaVersionMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QuerySchemaVersionMetadataResponse)
    Q_DISABLE_COPY(QuerySchemaVersionMetadataResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
