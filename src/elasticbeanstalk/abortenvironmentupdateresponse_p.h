// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTENVIRONMENTUPDATERESPONSE_P_H
#define QTAWS_ABORTENVIRONMENTUPDATERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AbortEnvironmentUpdateResponse;

class AbortEnvironmentUpdateResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit AbortEnvironmentUpdateResponsePrivate(AbortEnvironmentUpdateResponse * const q);

    void parseAbortEnvironmentUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AbortEnvironmentUpdateResponse)
    Q_DISABLE_COPY(AbortEnvironmentUpdateResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
