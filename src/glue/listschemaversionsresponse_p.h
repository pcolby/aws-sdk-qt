// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAVERSIONSRESPONSE_P_H
#define QTAWS_LISTSCHEMAVERSIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListSchemaVersionsResponse;

class ListSchemaVersionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListSchemaVersionsResponsePrivate(ListSchemaVersionsResponse * const q);

    void parseListSchemaVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSchemaVersionsResponse)
    Q_DISABLE_COPY(ListSchemaVersionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
