// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTCONNECTORDEFINITIONVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionVersionsResponse;

class ListConnectorDefinitionVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListConnectorDefinitionVersionsResponsePrivate(ListConnectorDefinitionVersionsResponse * const q);

    void parseListConnectorDefinitionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConnectorDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListConnectorDefinitionVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
