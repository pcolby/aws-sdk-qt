// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKEREDGEREQUEST_P_H
#define QTAWS_SAGEMAKEREDGEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sagemakeredgerequest.h"

namespace QtAws {
namespace SagemakerEdge {

class SagemakerEdgeRequest;

class SagemakerEdgeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SagemakerEdgeRequest::Action action; ///< SagemakerEdge action to be performed.
    QString apiVersion;        ///< SagemakerEdge API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SagemakerEdge request (query string) parameters. @todo?

    SagemakerEdgeRequestPrivate(const SagemakerEdgeRequest::Action action, SagemakerEdgeRequest * const q);
    SagemakerEdgeRequestPrivate(const SagemakerEdgeRequestPrivate &other, SagemakerEdgeRequest * const q);

    static QString toString(const SagemakerEdgeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SagemakerEdgeRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
