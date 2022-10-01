// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDEXPORTJOBSREQUEST_P_H
#define QTAWS_LISTWORLDEXPORTJOBSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listworldexportjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldExportJobsRequest;

class ListWorldExportJobsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListWorldExportJobsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListWorldExportJobsRequest * const q);
    ListWorldExportJobsRequestPrivate(const ListWorldExportJobsRequestPrivate &other,
                                   ListWorldExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorldExportJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
