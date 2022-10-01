// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHARVESTJOBSREQUEST_P_H
#define QTAWS_LISTHARVESTJOBSREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "listharvestjobsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ListHarvestJobsRequest;

class ListHarvestJobsRequestPrivate : public MediaPackageRequestPrivate {

public:
    ListHarvestJobsRequestPrivate(const MediaPackageRequest::Action action,
                                   ListHarvestJobsRequest * const q);
    ListHarvestJobsRequestPrivate(const ListHarvestJobsRequestPrivate &other,
                                   ListHarvestJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHarvestJobsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
