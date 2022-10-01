// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIREXPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEFHIREXPORTJOBREQUEST_P_H

#include "healthlakerequest_p.h"
#include "describefhirexportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRExportJobRequest;

class DescribeFHIRExportJobRequestPrivate : public HealthLakeRequestPrivate {

public:
    DescribeFHIRExportJobRequestPrivate(const HealthLakeRequest::Action action,
                                   DescribeFHIRExportJobRequest * const q);
    DescribeFHIRExportJobRequestPrivate(const DescribeFHIRExportJobRequestPrivate &other,
                                   DescribeFHIRExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFHIRExportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
