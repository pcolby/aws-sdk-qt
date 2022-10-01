// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPRESOURCESREQUEST_P_H
#define QTAWS_LISTGROUPRESOURCESREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "listgroupresourcesrequest.h"

namespace QtAws {
namespace Synthetics {

class ListGroupResourcesRequest;

class ListGroupResourcesRequestPrivate : public SyntheticsRequestPrivate {

public:
    ListGroupResourcesRequestPrivate(const SyntheticsRequest::Action action,
                                   ListGroupResourcesRequest * const q);
    ListGroupResourcesRequestPrivate(const ListGroupResourcesRequestPrivate &other,
                                   ListGroupResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupResourcesRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
