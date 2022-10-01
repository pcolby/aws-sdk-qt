// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTCONNECTORDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionsResponse;

class ListConnectorDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListConnectorDefinitionsResponsePrivate(ListConnectorDefinitionsResponse * const q);

    void parseListConnectorDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConnectorDefinitionsResponse)
    Q_DISABLE_COPY(ListConnectorDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
