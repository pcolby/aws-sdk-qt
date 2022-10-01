// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONTEMPLATEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "updateconfigurationtemplaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateConfigurationTemplateRequest;

class UpdateConfigurationTemplateRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    UpdateConfigurationTemplateRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   UpdateConfigurationTemplateRequest * const q);
    UpdateConfigurationTemplateRequestPrivate(const UpdateConfigurationTemplateRequestPrivate &other,
                                   UpdateConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
