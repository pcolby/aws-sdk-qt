// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONRESPONSE_P_H
#define QTAWS_DELETESCHEMAVERSIONRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaVersionResponse;

class DeleteSchemaVersionResponsePrivate : public SchemasResponsePrivate {

public:

    explicit DeleteSchemaVersionResponsePrivate(DeleteSchemaVersionResponse * const q);

    void parseDeleteSchemaVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaVersionResponse)
    Q_DISABLE_COPY(DeleteSchemaVersionResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
