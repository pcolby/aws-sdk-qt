// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEUPDATEROLLBACKREQUEST_P_H
#define QTAWS_CONTINUEUPDATEROLLBACKREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "continueupdaterollbackrequest.h"

namespace QtAws {
namespace CloudFormation {

class ContinueUpdateRollbackRequest;

class ContinueUpdateRollbackRequestPrivate : public CloudFormationRequestPrivate {

public:
    ContinueUpdateRollbackRequestPrivate(const CloudFormationRequest::Action action,
                                   ContinueUpdateRollbackRequest * const q);
    ContinueUpdateRollbackRequestPrivate(const ContinueUpdateRollbackRequestPrivate &other,
                                   ContinueUpdateRollbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(ContinueUpdateRollbackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
