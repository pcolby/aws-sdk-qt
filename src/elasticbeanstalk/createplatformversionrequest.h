// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMVERSIONREQUEST_H
#define QTAWS_CREATEPLATFORMVERSIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreatePlatformVersionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreatePlatformVersionRequest : public ElasticBeanstalkRequest {

public:
    CreatePlatformVersionRequest(const CreatePlatformVersionRequest &other);
    CreatePlatformVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlatformVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
