// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSCHEMARESPONSE_H
#define QTAWS_EXPORTSCHEMARESPONSE_H

#include "schemasresponse.h"
#include "exportschemarequest.h"

namespace QtAws {
namespace Schemas {

class ExportSchemaResponsePrivate;

class QTAWSSCHEMAS_EXPORT ExportSchemaResponse : public SchemasResponse {
    Q_OBJECT

public:
    ExportSchemaResponse(const ExportSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportSchemaResponse)
    Q_DISABLE_COPY(ExportSchemaResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
