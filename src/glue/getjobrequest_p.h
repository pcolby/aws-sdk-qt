// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBREQUEST_P_H
#define QTAWS_GETJOBREQUEST_P_H

#include "gluerequest_p.h"
#include "getjobrequest.h"

namespace QtAws {
namespace Glue {

class GetJobRequest;

class GetJobRequestPrivate : public GlueRequestPrivate {

public:
    GetJobRequestPrivate(const GlueRequest::Action action,
                                   GetJobRequest * const q);
    GetJobRequestPrivate(const GetJobRequestPrivate &other,
                                   GetJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
