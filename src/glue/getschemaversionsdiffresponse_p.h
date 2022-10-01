// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONSDIFFRESPONSE_P_H
#define QTAWS_GETSCHEMAVERSIONSDIFFRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionsDiffResponse;

class GetSchemaVersionsDiffResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetSchemaVersionsDiffResponsePrivate(GetSchemaVersionsDiffResponse * const q);

    void parseGetSchemaVersionsDiffResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSchemaVersionsDiffResponse)
    Q_DISABLE_COPY(GetSchemaVersionsDiffResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
