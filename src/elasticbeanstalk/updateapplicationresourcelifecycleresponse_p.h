// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLERESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONRESOURCELIFECYCLERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationResourceLifecycleResponse;

class UpdateApplicationResourceLifecycleResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit UpdateApplicationResourceLifecycleResponsePrivate(UpdateApplicationResourceLifecycleResponse * const q);

    void parseUpdateApplicationResourceLifecycleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationResourceLifecycleResponse)
    Q_DISABLE_COPY(UpdateApplicationResourceLifecycleResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
