// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETACCESSKEYREQUEST_H
#define QTAWS_CREATEBUCKETACCESSKEYREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateBucketAccessKeyRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateBucketAccessKeyRequest : public LightsailRequest {

public:
    CreateBucketAccessKeyRequest(const CreateBucketAccessKeyRequest &other);
    CreateBucketAccessKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBucketAccessKeyRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
