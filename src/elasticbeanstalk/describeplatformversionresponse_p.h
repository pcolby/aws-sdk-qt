// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLATFORMVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBEPLATFORMVERSIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribePlatformVersionResponse;

class DescribePlatformVersionResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribePlatformVersionResponsePrivate(DescribePlatformVersionResponse * const q);

    void parseDescribePlatformVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePlatformVersionResponse)
    Q_DISABLE_COPY(DescribePlatformVersionResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
