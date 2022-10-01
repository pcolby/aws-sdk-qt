// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEENVIRONMENTCONFIGURATIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "deleteenvironmentconfigurationrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteEnvironmentConfigurationResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeleteEnvironmentConfigurationResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DeleteEnvironmentConfigurationResponse(const DeleteEnvironmentConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentConfigurationResponse)
    Q_DISABLE_COPY(DeleteEnvironmentConfigurationResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
