// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYSCHEMAVERSIONMETADATARESPONSE_H
#define QTAWS_QUERYSCHEMAVERSIONMETADATARESPONSE_H

#include "glueresponse.h"
#include "queryschemaversionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class QuerySchemaVersionMetadataResponsePrivate;

class QTAWSGLUE_EXPORT QuerySchemaVersionMetadataResponse : public GlueResponse {
    Q_OBJECT

public:
    QuerySchemaVersionMetadataResponse(const QuerySchemaVersionMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QuerySchemaVersionMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QuerySchemaVersionMetadataResponse)
    Q_DISABLE_COPY(QuerySchemaVersionMetadataResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
