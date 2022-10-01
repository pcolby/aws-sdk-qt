// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_LISTLOGSUBSCRIPTIONSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "listlogsubscriptionsrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListLogSubscriptionsRequest;

class ListLogSubscriptionsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ListLogSubscriptionsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ListLogSubscriptionsRequest * const q);
    ListLogSubscriptionsRequestPrivate(const ListLogSubscriptionsRequestPrivate &other,
                                   ListLogSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLogSubscriptionsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
