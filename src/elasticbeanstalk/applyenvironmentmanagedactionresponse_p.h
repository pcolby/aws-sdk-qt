// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYENVIRONMENTMANAGEDACTIONRESPONSE_P_H
#define QTAWS_APPLYENVIRONMENTMANAGEDACTIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ApplyEnvironmentManagedActionResponse;

class ApplyEnvironmentManagedActionResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit ApplyEnvironmentManagedActionResponsePrivate(ApplyEnvironmentManagedActionResponse * const q);

    void parseApplyEnvironmentManagedActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplyEnvironmentManagedActionResponse)
    Q_DISABLE_COPY(ApplyEnvironmentManagedActionResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
