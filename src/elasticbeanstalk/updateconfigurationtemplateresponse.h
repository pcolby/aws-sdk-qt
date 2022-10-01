// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_UPDATECONFIGURATIONTEMPLATERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "updateconfigurationtemplaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateConfigurationTemplateResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateConfigurationTemplateResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    UpdateConfigurationTemplateResponse(const UpdateConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateConfigurationTemplateResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
