// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRIMPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEFHIRIMPORTJOBREQUEST_P_H

#include "healthlakerequest_p.h"
#include "describefhirimportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRImportJobRequest;

class DescribeFHIRImportJobRequestPrivate : public HealthLakeRequestPrivate {

public:
    DescribeFHIRImportJobRequestPrivate(const HealthLakeRequest::Action action,
                                   DescribeFHIRImportJobRequest * const q);
    DescribeFHIRImportJobRequestPrivate(const DescribeFHIRImportJobRequestPrivate &other,
                                   DescribeFHIRImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFHIRImportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
