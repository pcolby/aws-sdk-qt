// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDENVIRONMENTRESPONSE_P_H
#define QTAWS_REBUILDENVIRONMENTRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RebuildEnvironmentResponse;

class RebuildEnvironmentResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit RebuildEnvironmentResponsePrivate(RebuildEnvironmentResponse * const q);

    void parseRebuildEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebuildEnvironmentResponse)
    Q_DISABLE_COPY(RebuildEnvironmentResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
