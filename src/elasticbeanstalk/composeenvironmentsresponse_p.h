// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPOSEENVIRONMENTSRESPONSE_P_H
#define QTAWS_COMPOSEENVIRONMENTSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ComposeEnvironmentsResponse;

class ComposeEnvironmentsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit ComposeEnvironmentsResponsePrivate(ComposeEnvironmentsResponse * const q);

    void parseComposeEnvironmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ComposeEnvironmentsResponse)
    Q_DISABLE_COPY(ComposeEnvironmentsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
