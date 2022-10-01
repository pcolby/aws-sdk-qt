// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_DELETECONFIGURATIONTEMPLATERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "deleteconfigurationtemplaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteConfigurationTemplateResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeleteConfigurationTemplateResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DeleteConfigurationTemplateResponse(const DeleteConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteConfigurationTemplateResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
