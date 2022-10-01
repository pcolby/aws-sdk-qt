// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNREQUEST_P_H
#define QTAWS_GETJOBRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "getjobrunrequest.h"

namespace QtAws {
namespace Glue {

class GetJobRunRequest;

class GetJobRunRequestPrivate : public GlueRequestPrivate {

public:
    GetJobRunRequestPrivate(const GlueRequest::Action action,
                                   GetJobRunRequest * const q);
    GetJobRunRequestPrivate(const GetJobRunRequestPrivate &other,
                                   GetJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
