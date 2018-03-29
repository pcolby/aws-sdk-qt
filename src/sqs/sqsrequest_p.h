/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SQSREQUEST_P_H
#define QTAWS_SQSREQUEST_P_H

#include "sqs_p.h"
#include "sqsrequest.h"

namespace QtAws {
namespace SQS {

class SQSRequest;

class QTAWS_EXPORT SQSRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SQSRequest::Action action; ///< SQS action to be performed.
    QString apiVersion;        ///< SQS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SQS request (query string) parameters. @todo?

    SQSRequestPrivate(const SQSRequest::Action action, SQSRequest * const q);
    SQSRequestPrivate(const SQSRequestPrivate &other, SQSRequest * const q);

    static QString toString(const SQSRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SQSRequest)

};

} // namespace SQS
} // namespace QtAws

#endif
