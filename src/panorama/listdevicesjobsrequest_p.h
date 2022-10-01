// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESJOBSREQUEST_P_H
#define QTAWS_LISTDEVICESJOBSREQUEST_P_H

#include "panoramarequest_p.h"
#include "listdevicesjobsrequest.h"

namespace QtAws {
namespace Panorama {

class ListDevicesJobsRequest;

class ListDevicesJobsRequestPrivate : public PanoramaRequestPrivate {

public:
    ListDevicesJobsRequestPrivate(const PanoramaRequest::Action action,
                                   ListDevicesJobsRequest * const q);
    ListDevicesJobsRequestPrivate(const ListDevicesJobsRequestPrivate &other,
                                   ListDevicesJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevicesJobsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
