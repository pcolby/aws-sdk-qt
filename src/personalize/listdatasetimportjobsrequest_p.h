// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTDATASETIMPORTJOBSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listdatasetimportjobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetImportJobsRequest;

class ListDatasetImportJobsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListDatasetImportJobsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListDatasetImportJobsRequest * const q);
    ListDatasetImportJobsRequestPrivate(const ListDatasetImportJobsRequestPrivate &other,
                                   ListDatasetImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetImportJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
