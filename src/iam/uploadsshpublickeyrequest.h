// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSSHPUBLICKEYREQUEST_H
#define QTAWS_UPLOADSSHPUBLICKEYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UploadSSHPublicKeyRequestPrivate;

class QTAWSIAM_EXPORT UploadSSHPublicKeyRequest : public IamRequest {

public:
    UploadSSHPublicKeyRequest(const UploadSSHPublicKeyRequest &other);
    UploadSSHPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
