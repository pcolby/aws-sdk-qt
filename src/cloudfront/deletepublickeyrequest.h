// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICKEYREQUEST_H
#define QTAWS_DELETEPUBLICKEYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeletePublicKeyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeletePublicKeyRequest : public CloudFrontRequest {

public:
    DeletePublicKeyRequest(const DeletePublicKeyRequest &other);
    DeletePublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
