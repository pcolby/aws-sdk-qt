// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSREQUEST_P_H
#define SQSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sqsrequest.h"

#include <QVariantMap>

class QUrl;
class QUrlQuery;

namespace QtAws {
namespace SqsOld {

class SqsRequestPrivate : public AwsAbstractRequestPrivate {

public:
    SqsRequest::Action action; ///< SQS action to be performed.
    QString apiVersion;        ///< SQS API version string.
    QVariantMap parameters;    ///< SQS request (query string) parameters.

    SqsRequestPrivate(const SqsRequest::Action action, SqsRequest * const q);
    SqsRequestPrivate(const SqsRequestPrivate &other, SqsRequest * const q);

    virtual QUrlQuery urlQuery() const;

    static QString toString(const SqsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SqsRequest)
    Q_DISABLE_COPY(SqsRequestPrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
