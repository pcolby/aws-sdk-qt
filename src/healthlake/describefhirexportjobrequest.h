// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIREXPORTJOBREQUEST_H
#define QTAWS_DESCRIBEFHIREXPORTJOBREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRExportJobRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT DescribeFHIRExportJobRequest : public HealthLakeRequest {

public:
    DescribeFHIRExportJobRequest(const DescribeFHIRExportJobRequest &other);
    DescribeFHIRExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFHIRExportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
