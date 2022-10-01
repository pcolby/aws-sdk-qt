// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIGGERREQUEST_P_H
#define QTAWS_CREATETRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "createtriggerrequest.h"

namespace QtAws {
namespace Glue {

class CreateTriggerRequest;

class CreateTriggerRequestPrivate : public GlueRequestPrivate {

public:
    CreateTriggerRequestPrivate(const GlueRequest::Action action,
                                   CreateTriggerRequest * const q);
    CreateTriggerRequestPrivate(const CreateTriggerRequestPrivate &other,
                                   CreateTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
