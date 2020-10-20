/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSREQUEST_P_H
#define SQSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sqsrequest.h"

#include <QVariantMap>

class QUrl;
class QUrlQuery;

namespace QtAws {
namespace SqsOld {

class QTAWS_EXPORT SqsRequestPrivate : public AwsAbstractRequestPrivate {

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
