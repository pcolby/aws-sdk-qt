/*
    Copyright 2013-2018 Paul Colby

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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_KINESISREQUEST_P_H
#define QTAWS_KINESISREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class KinesisRequest;

class QTAWS_EXPORT KinesisRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisRequest::Action action; ///< Kinesis action to be performed.
    QString apiVersion;        ///< Kinesis API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Kinesis request (query string) parameters. @todo?

    KinesisRequestPrivate(const KinesisRequest::Action action, KinesisRequest * const q);
    KinesisRequestPrivate(const KinesisRequestPrivate &other, KinesisRequest * const q);

    static QString toString(const KinesisRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
