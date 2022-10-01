// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTFHIRIMPORTJOBSREQUEST_P_H

#include "healthlakerequest_p.h"
#include "listfhirimportjobsrequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRImportJobsRequest;

class ListFHIRImportJobsRequestPrivate : public HealthLakeRequestPrivate {

public:
    ListFHIRImportJobsRequestPrivate(const HealthLakeRequest::Action action,
                                   ListFHIRImportJobsRequest * const q);
    ListFHIRImportJobsRequestPrivate(const ListFHIRImportJobsRequestPrivate &other,
                                   ListFHIRImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFHIRImportJobsRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
