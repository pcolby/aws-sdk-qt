// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEENVIRONMENTRESPONSE_P_H
#define QTAWS_TERMINATEENVIRONMENTRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class TerminateEnvironmentResponse;

class TerminateEnvironmentResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit TerminateEnvironmentResponsePrivate(TerminateEnvironmentResponse * const q);

    void parseTerminateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateEnvironmentResponse)
    Q_DISABLE_COPY(TerminateEnvironmentResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
