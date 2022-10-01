// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONSRESPONSE_H
#define QTAWS_DELETESCHEMAVERSIONSRESPONSE_H

#include "glueresponse.h"
#include "deleteschemaversionsrequest.h"

namespace QtAws {
namespace Glue {

class DeleteSchemaVersionsResponsePrivate;

class QTAWSGLUE_EXPORT DeleteSchemaVersionsResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteSchemaVersionsResponse(const DeleteSchemaVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSchemaVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaVersionsResponse)
    Q_DISABLE_COPY(DeleteSchemaVersionsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
