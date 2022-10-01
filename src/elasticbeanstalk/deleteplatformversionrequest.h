// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMVERSIONREQUEST_H
#define QTAWS_DELETEPLATFORMVERSIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeletePlatformVersionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeletePlatformVersionRequest : public ElasticBeanstalkRequest {

public:
    DeletePlatformVersionRequest(const DeletePlatformVersionRequest &other);
    DeletePlatformVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlatformVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
