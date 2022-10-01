// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIREXPORTJOBSREQUEST_H
#define QTAWS_LISTFHIREXPORTJOBSREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRExportJobsRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT ListFHIRExportJobsRequest : public HealthLakeRequest {

public:
    ListFHIRExportJobsRequest(const ListFHIRExportJobsRequest &other);
    ListFHIRExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFHIRExportJobsRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
