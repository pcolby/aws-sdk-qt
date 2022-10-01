// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPROUTESREQUEST_P_H
#define QTAWS_LISTIPROUTESREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "listiproutesrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListIpRoutesRequest;

class ListIpRoutesRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ListIpRoutesRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ListIpRoutesRequest * const q);
    ListIpRoutesRequestPrivate(const ListIpRoutesRequestPrivate &other,
                                   ListIpRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIpRoutesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
