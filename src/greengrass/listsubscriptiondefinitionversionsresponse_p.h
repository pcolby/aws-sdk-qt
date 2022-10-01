// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionVersionsResponse;

class ListSubscriptionDefinitionVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListSubscriptionDefinitionVersionsResponsePrivate(ListSubscriptionDefinitionVersionsResponse * const q);

    void parseListSubscriptionDefinitionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListSubscriptionDefinitionVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
