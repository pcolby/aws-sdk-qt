// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTREQUEST_H
#define QTAWS_CREATEENVIRONMENTREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateEnvironmentRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateEnvironmentRequest : public ElasticBeanstalkRequest {

public:
    CreateEnvironmentRequest(const CreateEnvironmentRequest &other);
    CreateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
