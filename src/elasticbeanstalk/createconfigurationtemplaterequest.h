// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_CREATECONFIGURATIONTEMPLATEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateConfigurationTemplateRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateConfigurationTemplateRequest : public ElasticBeanstalkRequest {

public:
    CreateConfigurationTemplateRequest(const CreateConfigurationTemplateRequest &other);
    CreateConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
