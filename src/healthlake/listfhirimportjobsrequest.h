// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRIMPORTJOBSREQUEST_H
#define QTAWS_LISTFHIRIMPORTJOBSREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRImportJobsRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT ListFHIRImportJobsRequest : public HealthLakeRequest {

public:
    ListFHIRImportJobsRequest(const ListFHIRImportJobsRequest &other);
    ListFHIRImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFHIRImportJobsRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
