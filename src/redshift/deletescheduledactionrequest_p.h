// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONREQUEST_P_H
#define QTAWS_DELETESCHEDULEDACTIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deletescheduledactionrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteScheduledActionRequest;

class DeleteScheduledActionRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteScheduledActionRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteScheduledActionRequest * const q);
    DeleteScheduledActionRequestPrivate(const DeleteScheduledActionRequestPrivate &other,
                                   DeleteScheduledActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledActionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
