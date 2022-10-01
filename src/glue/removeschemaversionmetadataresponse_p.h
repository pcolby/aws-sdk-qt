// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESCHEMAVERSIONMETADATARESPONSE_P_H
#define QTAWS_REMOVESCHEMAVERSIONMETADATARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class RemoveSchemaVersionMetadataResponse;

class RemoveSchemaVersionMetadataResponsePrivate : public GlueResponsePrivate {

public:

    explicit RemoveSchemaVersionMetadataResponsePrivate(RemoveSchemaVersionMetadataResponse * const q);

    void parseRemoveSchemaVersionMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveSchemaVersionMetadataResponse)
    Q_DISABLE_COPY(RemoveSchemaVersionMetadataResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
