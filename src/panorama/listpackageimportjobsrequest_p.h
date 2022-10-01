// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTPACKAGEIMPORTJOBSREQUEST_P_H

#include "panoramarequest_p.h"
#include "listpackageimportjobsrequest.h"

namespace QtAws {
namespace Panorama {

class ListPackageImportJobsRequest;

class ListPackageImportJobsRequestPrivate : public PanoramaRequestPrivate {

public:
    ListPackageImportJobsRequestPrivate(const PanoramaRequest::Action action,
                                   ListPackageImportJobsRequest * const q);
    ListPackageImportJobsRequestPrivate(const ListPackageImportJobsRequestPrivate &other,
                                   ListPackageImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackageImportJobsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
