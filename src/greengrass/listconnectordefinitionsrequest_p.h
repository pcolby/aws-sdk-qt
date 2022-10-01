// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONSREQUEST_P_H
#define QTAWS_LISTCONNECTORDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listconnectordefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionsRequest;

class ListConnectorDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListConnectorDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListConnectorDefinitionsRequest * const q);
    ListConnectorDefinitionsRequestPrivate(const ListConnectorDefinitionsRequestPrivate &other,
                                   ListConnectorDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectorDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
