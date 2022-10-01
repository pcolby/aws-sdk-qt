// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBSREQUEST_P_H
#define QTAWS_GETJOBSREQUEST_P_H

#include "gluerequest_p.h"
#include "getjobsrequest.h"

namespace QtAws {
namespace Glue {

class GetJobsRequest;

class GetJobsRequestPrivate : public GlueRequestPrivate {

public:
    GetJobsRequestPrivate(const GlueRequest::Action action,
                                   GetJobsRequest * const q);
    GetJobsRequestPrivate(const GetJobsRequestPrivate &other,
                                   GetJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
