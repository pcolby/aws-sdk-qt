// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSCHEDULEDACTIONREQUEST_P_H
#define QTAWS_MODIFYSCHEDULEDACTIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyscheduledactionrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyScheduledActionRequest;

class ModifyScheduledActionRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyScheduledActionRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyScheduledActionRequest * const q);
    ModifyScheduledActionRequestPrivate(const ModifyScheduledActionRequestPrivate &other,
                                   ModifyScheduledActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyScheduledActionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
