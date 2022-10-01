// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTENVIRONMENTINFORESPONSE_P_H
#define QTAWS_REQUESTENVIRONMENTINFORESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RequestEnvironmentInfoResponse;

class RequestEnvironmentInfoResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit RequestEnvironmentInfoResponsePrivate(RequestEnvironmentInfoResponse * const q);

    void parseRequestEnvironmentInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestEnvironmentInfoResponse)
    Q_DISABLE_COPY(RequestEnvironmentInfoResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
