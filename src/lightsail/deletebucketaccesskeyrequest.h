// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETACCESSKEYREQUEST_H
#define QTAWS_DELETEBUCKETACCESSKEYREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteBucketAccessKeyRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteBucketAccessKeyRequest : public LightsailRequest {

public:
    DeleteBucketAccessKeyRequest(const DeleteBucketAccessKeyRequest &other);
    DeleteBucketAccessKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketAccessKeyRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
