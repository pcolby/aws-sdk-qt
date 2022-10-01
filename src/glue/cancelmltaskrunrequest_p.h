// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMLTASKRUNREQUEST_P_H
#define QTAWS_CANCELMLTASKRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "cancelmltaskrunrequest.h"

namespace QtAws {
namespace Glue {

class CancelMLTaskRunRequest;

class CancelMLTaskRunRequestPrivate : public GlueRequestPrivate {

public:
    CancelMLTaskRunRequestPrivate(const GlueRequest::Action action,
                                   CancelMLTaskRunRequest * const q);
    CancelMLTaskRunRequestPrivate(const CancelMLTaskRunRequestPrivate &other,
                                   CancelMLTaskRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelMLTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
