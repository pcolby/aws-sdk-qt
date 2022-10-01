// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECHANGESETREQUEST_P_H
#define QTAWS_EXECUTECHANGESETREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "executechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class ExecuteChangeSetRequest;

class ExecuteChangeSetRequestPrivate : public CloudFormationRequestPrivate {

public:
    ExecuteChangeSetRequestPrivate(const CloudFormationRequest::Action action,
                                   ExecuteChangeSetRequest * const q);
    ExecuteChangeSetRequestPrivate(const ExecuteChangeSetRequestPrivate &other,
                                   ExecuteChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
