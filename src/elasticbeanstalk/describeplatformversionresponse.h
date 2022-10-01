// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLATFORMVERSIONRESPONSE_H
#define QTAWS_DESCRIBEPLATFORMVERSIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeplatformversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribePlatformVersionResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribePlatformVersionResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DescribePlatformVersionResponse(const DescribePlatformVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePlatformVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlatformVersionResponse)
    Q_DISABLE_COPY(DescribePlatformVersionResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
