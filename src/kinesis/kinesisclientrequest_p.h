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

#ifndef QTAWS_KINESISCLIENTREQUEST_P_H
#define QTAWS_KINESISCLIENTREQUEST_P_H

#include "kinesis_p.h"
#include "kinesisclientrequest.h"

namespace QtAws {
namespace Kinesis {

class KinesisClientRequest;

class QTAWS_EXPORT KinesisClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    KinesisClientRequest::Action action; ///< Kinesis action to be performed.
    QString apiVersion;        ///< Kinesis API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Kinesis request (query string) parameters. @todo?

    KinesisClientRequestPrivate(const KinesisClientRequest::Action action, KinesisClientRequest * const q);
    KinesisClientRequestPrivate(const KinesisClientRequestPrivate &other, KinesisClientRequest * const q);

    static QString toString(const KinesisClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisClientRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
