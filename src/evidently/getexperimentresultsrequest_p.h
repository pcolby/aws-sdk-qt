// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESULTSREQUEST_P_H
#define QTAWS_GETEXPERIMENTRESULTSREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "getexperimentresultsrequest.h"

namespace QtAws {
namespace Evidently {

class GetExperimentResultsRequest;

class GetExperimentResultsRequestPrivate : public EvidentlyRequestPrivate {

public:
    GetExperimentResultsRequestPrivate(const EvidentlyRequest::Action action,
                                   GetExperimentResultsRequest * const q);
    GetExperimentResultsRequestPrivate(const GetExperimentResultsRequestPrivate &other,
                                   GetExperimentResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExperimentResultsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
