// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMARESPONSE_P_H
#define QTAWS_DELETESCHEMARESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaResponse;

class DeleteSchemaResponsePrivate : public SchemasResponsePrivate {

public:

    explicit DeleteSchemaResponsePrivate(DeleteSchemaResponse * const q);

    void parseDeleteSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaResponse)
    Q_DISABLE_COPY(DeleteSchemaResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
