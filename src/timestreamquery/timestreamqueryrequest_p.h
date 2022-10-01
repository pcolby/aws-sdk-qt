// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMQUERYREQUEST_P_H
#define QTAWS_TIMESTREAMQUERYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class TimestreamQueryRequest;

class TimestreamQueryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TimestreamQueryRequest::Action action; ///< TimestreamQuery action to be performed.
    QString apiVersion;        ///< TimestreamQuery API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< TimestreamQuery request (query string) parameters. @todo?

    TimestreamQueryRequestPrivate(const TimestreamQueryRequest::Action action, TimestreamQueryRequest * const q);
    TimestreamQueryRequestPrivate(const TimestreamQueryRequestPrivate &other, TimestreamQueryRequest * const q);

    static QString toString(const TimestreamQueryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TimestreamQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
