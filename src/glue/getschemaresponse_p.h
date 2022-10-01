// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMARESPONSE_P_H
#define QTAWS_GETSCHEMARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetSchemaResponse;

class GetSchemaResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetSchemaResponsePrivate(GetSchemaResponse * const q);

    void parseGetSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSchemaResponse)
    Q_DISABLE_COPY(GetSchemaResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
