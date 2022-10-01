// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTBULKIMPORTJOBSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listbulkimportjobsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListBulkImportJobsRequest;

class ListBulkImportJobsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListBulkImportJobsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListBulkImportJobsRequest * const q);
    ListBulkImportJobsRequestPrivate(const ListBulkImportJobsRequestPrivate &other,
                                   ListBulkImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBulkImportJobsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
