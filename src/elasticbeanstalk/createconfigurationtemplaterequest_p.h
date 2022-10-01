// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONTEMPLATEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "createconfigurationtemplaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateConfigurationTemplateRequest;

class CreateConfigurationTemplateRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    CreateConfigurationTemplateRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   CreateConfigurationTemplateRequest * const q);
    CreateConfigurationTemplateRequestPrivate(const CreateConfigurationTemplateRequestPrivate &other,
                                   CreateConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
