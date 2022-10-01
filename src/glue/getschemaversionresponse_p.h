// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONRESPONSE_P_H
#define QTAWS_GETSCHEMAVERSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionResponse;

class GetSchemaVersionResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetSchemaVersionResponsePrivate(GetSchemaVersionResponse * const q);

    void parseGetSchemaVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSchemaVersionResponse)
    Q_DISABLE_COPY(GetSchemaVersionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
