// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONVERSIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationVersionResponse;

class UpdateApplicationVersionResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit UpdateApplicationVersionResponsePrivate(UpdateApplicationVersionResponse * const q);

    void parseUpdateApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationVersionResponse)
    Q_DISABLE_COPY(UpdateApplicationVersionResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
