// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_DELETECONFIGURATIONTEMPLATEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteConfigurationTemplateRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeleteConfigurationTemplateRequest : public ElasticBeanstalkRequest {

public:
    DeleteConfigurationTemplateRequest(const DeleteConfigurationTemplateRequest &other);
    DeleteConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
