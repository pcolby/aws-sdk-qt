// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMVERSIONRESPONSE_P_H
#define QTAWS_CREATEPLATFORMVERSIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreatePlatformVersionResponse;

class CreatePlatformVersionResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit CreatePlatformVersionResponsePrivate(CreatePlatformVersionResponse * const q);

    void parseCreatePlatformVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlatformVersionResponse)
    Q_DISABLE_COPY(CreatePlatformVersionResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
