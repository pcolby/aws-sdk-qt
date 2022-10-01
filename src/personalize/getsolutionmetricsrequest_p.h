// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOLUTIONMETRICSREQUEST_P_H
#define QTAWS_GETSOLUTIONMETRICSREQUEST_P_H

#include "personalizerequest_p.h"
#include "getsolutionmetricsrequest.h"

namespace QtAws {
namespace Personalize {

class GetSolutionMetricsRequest;

class GetSolutionMetricsRequestPrivate : public PersonalizeRequestPrivate {

public:
    GetSolutionMetricsRequestPrivate(const PersonalizeRequest::Action action,
                                   GetSolutionMetricsRequest * const q);
    GetSolutionMetricsRequestPrivate(const GetSolutionMetricsRequestPrivate &other,
                                   GetSolutionMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSolutionMetricsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
