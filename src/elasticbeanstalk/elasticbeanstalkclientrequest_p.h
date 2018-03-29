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

#ifndef QTAWS_ELASTICBEANSTALKCLIENTREQUEST_P_H
#define QTAWS_ELASTICBEANSTALKCLIENTREQUEST_P_H

#include "elasticbeanstalk_p.h"
#include "elasticbeanstalkclientrequest.h"

namespace AWS {

namespace ElasticBeanstalk {

class ElasticBeanstalkClientRequest;

class QTAWS_EXPORT ElasticBeanstalkClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ElasticBeanstalkClientRequest::Action action; ///< ElasticBeanstalk action to be performed.
    QString apiVersion;        ///< ElasticBeanstalk API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticBeanstalk request (query string) parameters. @todo?

    ElasticBeanstalkClientRequestPrivate(const ElasticBeanstalkClientRequest::Action action, ElasticBeanstalkClientRequest * const q);
    ElasticBeanstalkClientRequestPrivate(const ElasticBeanstalkClientRequestPrivate &other, ElasticBeanstalkClientRequest * const q);

    static QString toString(const ElasticBeanstalkClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticBeanstalkClientRequest)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif
