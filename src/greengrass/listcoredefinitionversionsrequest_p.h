// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTCOREDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listcoredefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListCoreDefinitionVersionsRequest;

class ListCoreDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListCoreDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListCoreDefinitionVersionsRequest * const q);
    ListCoreDefinitionVersionsRequestPrivate(const ListCoreDefinitionVersionsRequestPrivate &other,
                                   ListCoreDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoreDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
