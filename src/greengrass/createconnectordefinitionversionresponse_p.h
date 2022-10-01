// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATECONNECTORDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateConnectorDefinitionVersionResponse;

class CreateConnectorDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateConnectorDefinitionVersionResponsePrivate(CreateConnectorDefinitionVersionResponse * const q);

    void parseCreateConnectorDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectorDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateConnectorDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
