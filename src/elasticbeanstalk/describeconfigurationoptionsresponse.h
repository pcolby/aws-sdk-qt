// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONOPTIONSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONOPTIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeconfigurationoptionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationOptionsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeConfigurationOptionsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribeConfigurationOptionsResponse(const DescribeConfigurationOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationOptionsResponse)
    Q_DISABLE_COPY(DescribeConfigurationOptionsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
