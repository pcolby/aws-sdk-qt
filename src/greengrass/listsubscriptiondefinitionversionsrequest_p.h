// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listsubscriptiondefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionVersionsRequest;

class ListSubscriptionDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListSubscriptionDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListSubscriptionDefinitionVersionsRequest * const q);
    ListSubscriptionDefinitionVersionsRequestPrivate(const ListSubscriptionDefinitionVersionsRequestPrivate &other,
                                   ListSubscriptionDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
