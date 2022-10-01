// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEENVIRONMENTINFORESPONSE_P_H
#define QTAWS_RETRIEVEENVIRONMENTINFORESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RetrieveEnvironmentInfoResponse;

class RetrieveEnvironmentInfoResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit RetrieveEnvironmentInfoResponsePrivate(RetrieveEnvironmentInfoResponse * const q);

    void parseRetrieveEnvironmentInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetrieveEnvironmentInfoResponse)
    Q_DISABLE_COPY(RetrieveEnvironmentInfoResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
