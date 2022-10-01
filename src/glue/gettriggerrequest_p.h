// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERREQUEST_P_H
#define QTAWS_GETTRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "gettriggerrequest.h"

namespace QtAws {
namespace Glue {

class GetTriggerRequest;

class GetTriggerRequestPrivate : public GlueRequestPrivate {

public:
    GetTriggerRequestPrivate(const GlueRequest::Action action,
                                   GetTriggerRequest * const q);
    GetTriggerRequestPrivate(const GetTriggerRequestPrivate &other,
                                   GetTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
