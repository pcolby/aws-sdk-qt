// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONRESPONSE_H
#define QTAWS_DELETESCHEMAVERSIONRESPONSE_H

#include "schemasresponse.h"
#include "deleteschemaversionrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaVersionResponsePrivate;

class QTAWSSCHEMAS_EXPORT DeleteSchemaVersionResponse : public SchemasResponse {
    Q_OBJECT

public:
    DeleteSchemaVersionResponse(const DeleteSchemaVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSchemaVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaVersionResponse)
    Q_DISABLE_COPY(DeleteSchemaVersionResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
