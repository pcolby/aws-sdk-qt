// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESREQUEST_P_H
#define QTAWS_LISTINSTANCEPROFILESREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listinstanceprofilesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListInstanceProfilesRequest;

class ListInstanceProfilesRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListInstanceProfilesRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListInstanceProfilesRequest * const q);
    ListInstanceProfilesRequestPrivate(const ListInstanceProfilesRequestPrivate &other,
                                   ListInstanceProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfilesRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
