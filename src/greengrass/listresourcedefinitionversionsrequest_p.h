// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTRESOURCEDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listresourcedefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionVersionsRequest;

class ListResourceDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListResourceDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListResourceDefinitionVersionsRequest * const q);
    ListResourceDefinitionVersionsRequestPrivate(const ListResourceDefinitionVersionsRequestPrivate &other,
                                   ListResourceDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
