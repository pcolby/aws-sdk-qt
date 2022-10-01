// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAVERSIONMETADATARESPONSE_P_H
#define QTAWS_PUTSCHEMAVERSIONMETADATARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class PutSchemaVersionMetadataResponse;

class PutSchemaVersionMetadataResponsePrivate : public GlueResponsePrivate {

public:

    explicit PutSchemaVersionMetadataResponsePrivate(PutSchemaVersionMetadataResponse * const q);

    void parsePutSchemaVersionMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSchemaVersionMetadataResponse)
    Q_DISABLE_COPY(PutSchemaVersionMetadataResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
