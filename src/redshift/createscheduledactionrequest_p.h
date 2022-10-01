// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDACTIONREQUEST_P_H
#define QTAWS_CREATESCHEDULEDACTIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createscheduledactionrequest.h"

namespace QtAws {
namespace Redshift {

class CreateScheduledActionRequest;

class CreateScheduledActionRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateScheduledActionRequestPrivate(const RedshiftRequest::Action action,
                                   CreateScheduledActionRequest * const q);
    CreateScheduledActionRequestPrivate(const CreateScheduledActionRequestPrivate &other,
                                   CreateScheduledActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScheduledActionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
