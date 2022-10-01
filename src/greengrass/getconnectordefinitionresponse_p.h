// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONRESPONSE_P_H
#define QTAWS_GETCONNECTORDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionResponse;

class GetConnectorDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetConnectorDefinitionResponsePrivate(GetConnectorDefinitionResponse * const q);

    void parseGetConnectorDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectorDefinitionResponse)
    Q_DISABLE_COPY(GetConnectorDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
