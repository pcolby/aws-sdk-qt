// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICBEANSTALKREQUEST_P_H
#define QTAWS_ELASTICBEANSTALKREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ElasticBeanstalkRequest;

class ElasticBeanstalkRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElasticBeanstalkRequest::Action action; ///< ElasticBeanstalk action to be performed.
    QString apiVersion;        ///< ElasticBeanstalk API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticBeanstalk request (query string) parameters. @todo?

    ElasticBeanstalkRequestPrivate(const ElasticBeanstalkRequest::Action action, ElasticBeanstalkRequest * const q);
    ElasticBeanstalkRequestPrivate(const ElasticBeanstalkRequestPrivate &other, ElasticBeanstalkRequest * const q);

    static QString toString(const ElasticBeanstalkRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticBeanstalkRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
