// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFHIRIMPORTJOBREQUEST_P_H
#define QTAWS_STARTFHIRIMPORTJOBREQUEST_P_H

#include "healthlakerequest_p.h"
#include "startfhirimportjobrequest.h"

namespace QtAws {
namespace HealthLake {

class StartFHIRImportJobRequest;

class StartFHIRImportJobRequestPrivate : public HealthLakeRequestPrivate {

public:
    StartFHIRImportJobRequestPrivate(const HealthLakeRequest::Action action,
                                   StartFHIRImportJobRequest * const q);
    StartFHIRImportJobRequestPrivate(const StartFHIRImportJobRequestPrivate &other,
                                   StartFHIRImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFHIRImportJobRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
