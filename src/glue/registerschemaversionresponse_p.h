// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCHEMAVERSIONRESPONSE_P_H
#define QTAWS_REGISTERSCHEMAVERSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class RegisterSchemaVersionResponse;

class RegisterSchemaVersionResponsePrivate : public GlueResponsePrivate {

public:

    explicit RegisterSchemaVersionResponsePrivate(RegisterSchemaVersionResponse * const q);

    void parseRegisterSchemaVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterSchemaVersionResponse)
    Q_DISABLE_COPY(RegisterSchemaVersionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
