// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESCHEMAVERSIONMETADATARESPONSE_H
#define QTAWS_REMOVESCHEMAVERSIONMETADATARESPONSE_H

#include "glueresponse.h"
#include "removeschemaversionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class RemoveSchemaVersionMetadataResponsePrivate;

class QTAWSGLUE_EXPORT RemoveSchemaVersionMetadataResponse : public GlueResponse {
    Q_OBJECT

public:
    RemoveSchemaVersionMetadataResponse(const RemoveSchemaVersionMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveSchemaVersionMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveSchemaVersionMetadataResponse)
    Q_DISABLE_COPY(RemoveSchemaVersionMetadataResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
