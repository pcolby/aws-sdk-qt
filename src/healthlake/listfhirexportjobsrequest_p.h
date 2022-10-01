// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIREXPORTJOBSREQUEST_P_H
#define QTAWS_LISTFHIREXPORTJOBSREQUEST_P_H

#include "healthlakerequest_p.h"
#include "listfhirexportjobsrequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRExportJobsRequest;

class ListFHIRExportJobsRequestPrivate : public HealthLakeRequestPrivate {

public:
    ListFHIRExportJobsRequestPrivate(const HealthLakeRequest::Action action,
                                   ListFHIRExportJobsRequest * const q);
    ListFHIRExportJobsRequestPrivate(const ListFHIRExportJobsRequestPrivate &other,
                                   ListFHIRExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFHIRExportJobsRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
