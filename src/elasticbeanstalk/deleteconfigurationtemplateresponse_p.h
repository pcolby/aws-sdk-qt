// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONTEMPLATERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteConfigurationTemplateResponse;

class DeleteConfigurationTemplateResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DeleteConfigurationTemplateResponsePrivate(DeleteConfigurationTemplateResponse * const q);

    void parseDeleteConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteConfigurationTemplateResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
