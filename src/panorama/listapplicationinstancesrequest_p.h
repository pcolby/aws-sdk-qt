// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCESREQUEST_P_H
#define QTAWS_LISTAPPLICATIONINSTANCESREQUEST_P_H

#include "panoramarequest_p.h"
#include "listapplicationinstancesrequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstancesRequest;

class ListApplicationInstancesRequestPrivate : public PanoramaRequestPrivate {

public:
    ListApplicationInstancesRequestPrivate(const PanoramaRequest::Action action,
                                   ListApplicationInstancesRequest * const q);
    ListApplicationInstancesRequestPrivate(const ListApplicationInstancesRequestPrivate &other,
                                   ListApplicationInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationInstancesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
