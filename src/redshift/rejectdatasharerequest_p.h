// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDATASHAREREQUEST_P_H
#define QTAWS_REJECTDATASHAREREQUEST_P_H

#include "redshiftrequest_p.h"
#include "rejectdatasharerequest.h"

namespace QtAws {
namespace Redshift {

class RejectDataShareRequest;

class RejectDataShareRequestPrivate : public RedshiftRequestPrivate {

public:
    RejectDataShareRequestPrivate(const RedshiftRequest::Action action,
                                   RejectDataShareRequest * const q);
    RejectDataShareRequestPrivate(const RejectDataShareRequestPrivate &other,
                                   RejectDataShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectDataShareRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
