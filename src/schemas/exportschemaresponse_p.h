// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSCHEMARESPONSE_P_H
#define QTAWS_EXPORTSCHEMARESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class ExportSchemaResponse;

class ExportSchemaResponsePrivate : public SchemasResponsePrivate {

public:

    explicit ExportSchemaResponsePrivate(ExportSchemaResponse * const q);

    void parseExportSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportSchemaResponse)
    Q_DISABLE_COPY(ExportSchemaResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
