// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTCONNECTORDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listconnectordefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionVersionsRequest;

class ListConnectorDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListConnectorDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListConnectorDefinitionVersionsRequest * const q);
    ListConnectorDefinitionVersionsRequestPrivate(const ListConnectorDefinitionVersionsRequestPrivate &other,
                                   ListConnectorDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectorDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
