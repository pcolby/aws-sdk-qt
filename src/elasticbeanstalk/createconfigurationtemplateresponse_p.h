// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONTEMPLATERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateConfigurationTemplateResponse;

class CreateConfigurationTemplateResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit CreateConfigurationTemplateResponsePrivate(CreateConfigurationTemplateResponse * const q);

    void parseCreateConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationTemplateResponse)
    Q_DISABLE_COPY(CreateConfigurationTemplateResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
