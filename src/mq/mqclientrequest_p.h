/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MQCLIENTREQUEST_P_H
#define QTAWS_MQCLIENTREQUEST_P_H

#include "mq_p.h"
#include "request.h"

namespace AWS {

namespace MQ {

class MqClientRequest;

class QTAWS_EXPORT MqClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MqClientRequest::Action action; ///< MQ action to be performed.
    QString apiVersion;        ///< MQ API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MQ request (query string) parameters. @todo?

    MqClientRequestPrivate(const MqClientRequest::Action action, MqClientRequest * const q);
    MqClientRequestPrivate(const RequestPrivate &other, MqClientRequest * const q);

    static QString toString(const MqClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MqClientRequest)

};

} // namespace MQ
} // namespace AWS

#endif
