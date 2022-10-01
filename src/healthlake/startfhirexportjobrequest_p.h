// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIREXPORTJOBREQUEST_P_H
#define QTAWS_STARTFHIREXPORTJOBREQUEST_P_H

#include "healthlakerequest_p.h"
#include "startfhirexportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRExportJobRequest;

class StartFHIRExportJobRequestPrivate : public HealthLakeRequestPrivate {

public:
    StartFHIRExportJobRequestPrivate(const HealthLakeRequest::Action action,
                                   StartFHIRExportJobRequest * const q);
    StartFHIRExportJobRequestPrivate(const StartFHIRExportJobRequestPrivate &other,
                                   StartFHIRExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFHIRExportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
