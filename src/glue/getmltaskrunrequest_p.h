// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTASKRUNREQUEST_P_H
#define QTAWS_GETMLTASKRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "getmltaskrunrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTaskRunRequest;

class GetMLTaskRunRequestPrivate : public GlueRequestPrivate {

public:
    GetMLTaskRunRequestPrivate(const GlueRequest::Action action,
                                   GetMLTaskRunRequest * const q);
    GetMLTaskRunRequestPrivate(const GetMLTaskRunRequestPrivate &other,
                                   GetMLTaskRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMLTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
