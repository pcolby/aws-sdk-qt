// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESTORAGECONFIGSREQUEST_P_H
#define QTAWS_LISTINSTANCESTORAGECONFIGSREQUEST_P_H

#include "connectrequest_p.h"
#include "listinstancestorageconfigsrequest.h"

namespace QtAws {
namespace Connect {

class ListInstanceStorageConfigsRequest;

class ListInstanceStorageConfigsRequestPrivate : public ConnectRequestPrivate {

public:
    ListInstanceStorageConfigsRequestPrivate(const ConnectRequest::Action action,
                                   ListInstanceStorageConfigsRequest * const q);
    ListInstanceStorageConfigsRequestPrivate(const ListInstanceStorageConfigsRequestPrivate &other,
                                   ListInstanceStorageConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceStorageConfigsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
