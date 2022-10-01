// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORDEFINITIONRESPONSE_P_H
#define QTAWS_CREATECONNECTORDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateConnectorDefinitionResponse;

class CreateConnectorDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateConnectorDefinitionResponsePrivate(CreateConnectorDefinitionResponse * const q);

    void parseCreateConnectorDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectorDefinitionResponse)
    Q_DISABLE_COPY(CreateConnectorDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
