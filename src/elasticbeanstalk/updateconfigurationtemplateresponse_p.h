// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONTEMPLATERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateConfigurationTemplateResponse;

class UpdateConfigurationTemplateResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit UpdateConfigurationTemplateResponsePrivate(UpdateConfigurationTemplateResponse * const q);

    void parseUpdateConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateConfigurationTemplateResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
