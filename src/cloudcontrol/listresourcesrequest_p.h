// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESREQUEST_P_H
#define QTAWS_LISTRESOURCESREQUEST_P_H

#include "cloudcontrolrequest_p.h"
#include "listresourcesrequest.h"

namespace QtAws {
namespace CloudControl {

class ListResourcesRequest;

class ListResourcesRequestPrivate : public CloudControlRequestPrivate {

public:
    ListResourcesRequestPrivate(const CloudControlRequest::Action action,
                                   ListResourcesRequest * const q);
    ListResourcesRequestPrivate(const ListResourcesRequestPrivate &other,
                                   ListResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
