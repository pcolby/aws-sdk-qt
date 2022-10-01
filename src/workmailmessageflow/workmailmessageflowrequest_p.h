// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILMESSAGEFLOWREQUEST_P_H
#define QTAWS_WORKMAILMESSAGEFLOWREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workmailmessageflowrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowRequest;

class WorkMailMessageFlowRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkMailMessageFlowRequest::Action action; ///< WorkMailMessageFlow action to be performed.
    QString apiVersion;        ///< WorkMailMessageFlow API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkMailMessageFlow request (query string) parameters. @todo?

    WorkMailMessageFlowRequestPrivate(const WorkMailMessageFlowRequest::Action action, WorkMailMessageFlowRequest * const q);
    WorkMailMessageFlowRequestPrivate(const WorkMailMessageFlowRequestPrivate &other, WorkMailMessageFlowRequest * const q);

    static QString toString(const WorkMailMessageFlowRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkMailMessageFlowRequest)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
