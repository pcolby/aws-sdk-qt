// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETTINGSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONSETTINGSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeconfigurationsettingsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationSettingsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeConfigurationSettingsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeConfigurationSettingsResponse(const DescribeConfigurationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationSettingsResponse)
    Q_DISABLE_COPY(DescribeConfigurationSettingsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
