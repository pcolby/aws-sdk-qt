// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMARESPONSE_P_H
#define QTAWS_CREATESCHEMARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateSchemaResponse;

class CreateSchemaResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateSchemaResponsePrivate(CreateSchemaResponse * const q);

    void parseCreateSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSchemaResponse)
    Q_DISABLE_COPY(CreateSchemaResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
