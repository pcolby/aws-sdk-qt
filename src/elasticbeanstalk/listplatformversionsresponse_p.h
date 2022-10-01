// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMVERSIONSRESPONSE_P_H
#define QTAWS_LISTPLATFORMVERSIONSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformVersionsResponse;

class ListPlatformVersionsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit ListPlatformVersionsResponsePrivate(ListPlatformVersionsResponse * const q);

    void parseListPlatformVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlatformVersionsResponse)
    Q_DISABLE_COPY(ListPlatformVersionsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
