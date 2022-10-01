// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIGGERREQUEST_P_H
#define QTAWS_UPDATETRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "updatetriggerrequest.h"

namespace QtAws {
namespace Glue {

class UpdateTriggerRequest;

class UpdateTriggerRequestPrivate : public GlueRequestPrivate {

public:
    UpdateTriggerRequestPrivate(const GlueRequest::Action action,
                                   UpdateTriggerRequest * const q);
    UpdateTriggerRequestPrivate(const UpdateTriggerRequestPrivate &other,
                                   UpdateTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
