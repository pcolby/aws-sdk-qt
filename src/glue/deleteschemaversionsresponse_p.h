// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONSRESPONSE_P_H
#define QTAWS_DELETESCHEMAVERSIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteSchemaVersionsResponse;

class DeleteSchemaVersionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteSchemaVersionsResponsePrivate(DeleteSchemaVersionsResponse * const q);

    void parseDeleteSchemaVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaVersionsResponse)
    Q_DISABLE_COPY(DeleteSchemaVersionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
