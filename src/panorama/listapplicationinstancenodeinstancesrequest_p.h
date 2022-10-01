// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESREQUEST_P_H
#define QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESREQUEST_P_H

#include "panoramarequest_p.h"
#include "listapplicationinstancenodeinstancesrequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceNodeInstancesRequest;

class ListApplicationInstanceNodeInstancesRequestPrivate : public PanoramaRequestPrivate {

public:
    ListApplicationInstanceNodeInstancesRequestPrivate(const PanoramaRequest::Action action,
                                   ListApplicationInstanceNodeInstancesRequest * const q);
    ListApplicationInstanceNodeInstancesRequestPrivate(const ListApplicationInstanceNodeInstancesRequestPrivate &other,
                                   ListApplicationInstanceNodeInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationInstanceNodeInstancesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
