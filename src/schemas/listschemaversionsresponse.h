// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAVERSIONSRESPONSE_H
#define QTAWS_LISTSCHEMAVERSIONSRESPONSE_H

#include "schemasresponse.h"
#include "listschemaversionsrequest.h"

namespace QtAws {
namespace Schemas {

class ListSchemaVersionsResponsePrivate;

class QTAWSSCHEMAS_EXPORT ListSchemaVersionsResponse : public SchemasResponse {
    Q_OBJECT

public:
    ListSchemaVersionsResponse(const ListSchemaVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSchemaVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchemaVersionsResponse)
    Q_DISABLE_COPY(ListSchemaVersionsResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
