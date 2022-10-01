// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMABYDEFINITIONRESPONSE_P_H
#define QTAWS_GETSCHEMABYDEFINITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetSchemaByDefinitionResponse;

class GetSchemaByDefinitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetSchemaByDefinitionResponsePrivate(GetSchemaByDefinitionResponse * const q);

    void parseGetSchemaByDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSchemaByDefinitionResponse)
    Q_DISABLE_COPY(GetSchemaByDefinitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
