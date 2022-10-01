// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIGGERREQUEST_P_H
#define QTAWS_DELETETRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "deletetriggerrequest.h"

namespace QtAws {
namespace Glue {

class DeleteTriggerRequest;

class DeleteTriggerRequestPrivate : public GlueRequestPrivate {

public:
    DeleteTriggerRequestPrivate(const GlueRequest::Action action,
                                   DeleteTriggerRequest * const q);
    DeleteTriggerRequestPrivate(const DeleteTriggerRequestPrivate &other,
                                   DeleteTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
