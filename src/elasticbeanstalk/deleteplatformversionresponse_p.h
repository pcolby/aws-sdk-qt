// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMVERSIONRESPONSE_P_H
#define QTAWS_DELETEPLATFORMVERSIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeletePlatformVersionResponse;

class DeletePlatformVersionResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DeletePlatformVersionResponsePrivate(DeletePlatformVersionResponse * const q);

    void parseDeletePlatformVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlatformVersionResponse)
    Q_DISABLE_COPY(DeletePlatformVersionResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
