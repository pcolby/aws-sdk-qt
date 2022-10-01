// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELUPDATESTACKREQUEST_P_H
#define QTAWS_CANCELUPDATESTACKREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "cancelupdatestackrequest.h"

namespace QtAws {
namespace CloudFormation {

class CancelUpdateStackRequest;

class CancelUpdateStackRequestPrivate : public CloudFormationRequestPrivate {

public:
    CancelUpdateStackRequestPrivate(const CloudFormationRequest::Action action,
                                   CancelUpdateStackRequest * const q);
    CancelUpdateStackRequestPrivate(const CancelUpdateStackRequestPrivate &other,
                                   CancelUpdateStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelUpdateStackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
