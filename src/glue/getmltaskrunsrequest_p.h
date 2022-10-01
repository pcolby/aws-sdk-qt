// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNSREQUEST_P_H
#define QTAWS_GETMLTASKRUNSREQUEST_P_H

#include "gluerequest_p.h"
#include "getmltaskrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunsRequest;

class GetMLTaskRunsRequestPrivate : public GlueRequestPrivate {

public:
    GetMLTaskRunsRequestPrivate(const GlueRequest::Action action,
                                   GetMLTaskRunsRequest * const q);
    GetMLTaskRunsRequestPrivate(const GetMLTaskRunsRequestPrivate &other,
                                   GetMLTaskRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMLTaskRunsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
