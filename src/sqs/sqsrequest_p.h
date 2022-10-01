// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SQSREQUEST_P_H
#define QTAWS_SQSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class SqsRequest;

class SqsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SqsRequest::Action action; ///< Sqs action to be performed.
    QString apiVersion;        ///< Sqs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Sqs request (query string) parameters. @todo?

    SqsRequestPrivate(const SqsRequest::Action action, SqsRequest * const q);
    SqsRequestPrivate(const SqsRequestPrivate &other, SqsRequest * const q);

    static QString toString(const SqsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SqsRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
