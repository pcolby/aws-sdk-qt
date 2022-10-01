// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTCONFIGURATIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteEnvironmentConfigurationResponse;

class DeleteEnvironmentConfigurationResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DeleteEnvironmentConfigurationResponsePrivate(DeleteEnvironmentConfigurationResponse * const q);

    void parseDeleteEnvironmentConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentConfigurationResponse)
    Q_DISABLE_COPY(DeleteEnvironmentConfigurationResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
