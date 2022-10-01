// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAVERSIONMETADATARESPONSE_H
#define QTAWS_PUTSCHEMAVERSIONMETADATARESPONSE_H

#include "glueresponse.h"
#include "putschemaversionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class PutSchemaVersionMetadataResponsePrivate;

class QTAWSGLUE_EXPORT PutSchemaVersionMetadataResponse : public GlueResponse {
    Q_OBJECT

public:
    PutSchemaVersionMetadataResponse(const PutSchemaVersionMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSchemaVersionMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSchemaVersionMetadataResponse)
    Q_DISABLE_COPY(PutSchemaVersionMetadataResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
