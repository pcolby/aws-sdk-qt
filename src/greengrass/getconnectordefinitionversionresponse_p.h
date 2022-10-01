// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETCONNECTORDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionVersionResponse;

class GetConnectorDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetConnectorDefinitionVersionResponsePrivate(GetConnectorDefinitionVersionResponse * const q);

    void parseGetConnectorDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectorDefinitionVersionResponse)
    Q_DISABLE_COPY(GetConnectorDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
