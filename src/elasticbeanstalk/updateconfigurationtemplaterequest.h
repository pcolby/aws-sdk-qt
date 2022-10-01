// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_UPDATECONFIGURATIONTEMPLATEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateConfigurationTemplateRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateConfigurationTemplateRequest : public ElasticBeanstalkRequest {

public:
    UpdateConfigurationTemplateRequest(const UpdateConfigurationTemplateRequest &other);
    UpdateConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
