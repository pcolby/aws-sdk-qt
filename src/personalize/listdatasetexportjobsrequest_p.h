// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETEXPORTJOBSREQUEST_P_H
#define QTAWS_LISTDATASETEXPORTJOBSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listdatasetexportjobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetExportJobsRequest;

class ListDatasetExportJobsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListDatasetExportJobsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListDatasetExportJobsRequest * const q);
    ListDatasetExportJobsRequestPrivate(const ListDatasetExportJobsRequestPrivate &other,
                                   ListDatasetExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetExportJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
