// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTAPPSERVERRESPONSE_P_H
#define QTAWS_RESTARTAPPSERVERRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RestartAppServerResponse;

class RestartAppServerResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit RestartAppServerResponsePrivate(RestartAppServerResponse * const q);

    void parseRestartAppServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestartAppServerResponse)
    Q_DISABLE_COPY(RestartAppServerResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
