// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONSETTINGSRESPONSE_H
#define QTAWS_VALIDATECONFIGURATIONSETTINGSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "validateconfigurationsettingsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ValidateConfigurationSettingsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ValidateConfigurationSettingsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    ValidateConfigurationSettingsResponse(const ValidateConfigurationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateConfigurationSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateConfigurationSettingsResponse)
    Q_DISABLE_COPY(ValidateConfigurationSettingsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
