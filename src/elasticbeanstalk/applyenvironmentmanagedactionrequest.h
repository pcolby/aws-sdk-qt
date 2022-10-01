// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYENVIRONMENTMANAGEDACTIONREQUEST_H
#define QTAWS_APPLYENVIRONMENTMANAGEDACTIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ApplyEnvironmentManagedActionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ApplyEnvironmentManagedActionRequest : public ElasticBeanstalkRequest {

public:
    ApplyEnvironmentManagedActionRequest(const ApplyEnvironmentManagedActionRequest &other);
    ApplyEnvironmentManagedActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyEnvironmentManagedActionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
