// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICBEANSTALKCLIENT_P_H
#define QTAWS_ELASTICBEANSTALKCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ElasticBeanstalk {

class ElasticBeanstalkClient;

class ElasticBeanstalkClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ElasticBeanstalkClientPrivate(ElasticBeanstalkClient * const q);

private:
    Q_DECLARE_PUBLIC(ElasticBeanstalkClient)
    Q_DISABLE_COPY(ElasticBeanstalkClientPrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
