// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESERVICEREQUEST_P_H
#define QTAWS_RESUMESERVICEREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "resumeservicerequest.h"

namespace QtAws {
namespace AppRunner {

class ResumeServiceRequest;

class ResumeServiceRequestPrivate : public AppRunnerRequestPrivate {

public:
    ResumeServiceRequestPrivate(const AppRunnerRequest::Action action,
                                   ResumeServiceRequest * const q);
    ResumeServiceRequestPrivate(const ResumeServiceRequestPrivate &other,
                                   ResumeServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
