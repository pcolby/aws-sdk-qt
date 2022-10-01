// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDGENERATIONJOBSREQUEST_P_H
#define QTAWS_LISTWORLDGENERATIONJOBSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listworldgenerationjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldGenerationJobsRequest;

class ListWorldGenerationJobsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListWorldGenerationJobsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListWorldGenerationJobsRequest * const q);
    ListWorldGenerationJobsRequestPrivate(const ListWorldGenerationJobsRequestPrivate &other,
                                   ListWorldGenerationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorldGenerationJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
