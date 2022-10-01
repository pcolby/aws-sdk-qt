// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONTEMPLATEREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "deleteconfigurationtemplaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteConfigurationTemplateRequest;

class DeleteConfigurationTemplateRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DeleteConfigurationTemplateRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DeleteConfigurationTemplateRequest * const q);
    DeleteConfigurationTemplateRequestPrivate(const DeleteConfigurationTemplateRequestPrivate &other,
                                   DeleteConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
