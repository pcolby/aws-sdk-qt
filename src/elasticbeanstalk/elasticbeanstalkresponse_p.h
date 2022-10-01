// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICBEANSTALKRESPONSE_P_H
#define QTAWS_ELASTICBEANSTALKRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ElasticBeanstalkResponse;

class ElasticBeanstalkResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ElasticBeanstalkResponsePrivate(ElasticBeanstalkResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ElasticBeanstalkResponse)
    Q_DISABLE_COPY(ElasticBeanstalkResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
