// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSREQUEST_P_H
#define QTAWS_LISTWORKGROUPSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "listworkgroupsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListWorkgroupsRequest;

class ListWorkgroupsRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    ListWorkgroupsRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   ListWorkgroupsRequest * const q);
    ListWorkgroupsRequestPrivate(const ListWorkgroupsRequestPrivate &other,
                                   ListWorkgroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkgroupsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
