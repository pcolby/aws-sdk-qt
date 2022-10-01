// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNSREQUEST_P_H
#define QTAWS_GETJOBRUNSREQUEST_P_H

#include "gluerequest_p.h"
#include "getjobrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetJobRunsRequest;

class GetJobRunsRequestPrivate : public GlueRequestPrivate {

public:
    GetJobRunsRequestPrivate(const GlueRequest::Action action,
                                   GetJobRunsRequest * const q);
    GetJobRunsRequestPrivate(const GetJobRunsRequestPrivate &other,
                                   GetJobRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobRunsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
