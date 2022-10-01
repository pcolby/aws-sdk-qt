// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATECONNECTORDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateConnectorDefinitionResponse;

class UpdateConnectorDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateConnectorDefinitionResponsePrivate(UpdateConnectorDefinitionResponse * const q);

    void parseUpdateConnectorDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorDefinitionResponse)
    Q_DISABLE_COPY(UpdateConnectorDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
