// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREQUEST_H
#define QTAWS_GETBUCKETREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetBucketRequest : public S3ControlRequest {

public:
    GetBucketRequest(const GetBucketRequest &other);
    GetBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
