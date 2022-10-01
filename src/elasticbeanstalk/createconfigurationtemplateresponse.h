// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_CREATECONFIGURATIONTEMPLATERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "createconfigurationtemplaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateConfigurationTemplateResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateConfigurationTemplateResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    CreateConfigurationTemplateResponse(const CreateConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationTemplateResponse)
    Q_DISABLE_COPY(CreateConfigurationTemplateResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
