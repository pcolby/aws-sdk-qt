// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLANREQUEST_P_H
#define QTAWS_GETPLANREQUEST_P_H

#include "gluerequest_p.h"
#include "getplanrequest.h"

namespace QtAws {
namespace Glue {

class GetPlanRequest;

class GetPlanRequestPrivate : public GlueRequestPrivate {

public:
    GetPlanRequestPrivate(const GlueRequest::Action action,
                                   GetPlanRequest * const q);
    GetPlanRequestPrivate(const GetPlanRequestPrivate &other,
                                   GetPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPlanRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
