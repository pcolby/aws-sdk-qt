// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPVERSIONSREQUEST_P_H
#define QTAWS_LISTGROUPVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listgroupversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupVersionsRequest;

class ListGroupVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListGroupVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListGroupVersionsRequest * const q);
    ListGroupVersionsRequestPrivate(const ListGroupVersionsRequestPrivate &other,
                                   ListGroupVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
