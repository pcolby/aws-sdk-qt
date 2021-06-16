/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETESCHEMAVERSIONRESPONSE_H
#define QTAWS_DELETESCHEMAVERSIONRESPONSE_H

#include "schemasresponse.h"
#include "deleteschemaversionrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaVersionResponsePrivate;

class QTAWS_EXPORT DeleteSchemaVersionResponse : public SchemasResponse {
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
