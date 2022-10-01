// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYREQUEST_H
#define QTAWS_DELETESSHPUBLICKEYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSSHPublicKeyRequestPrivate;

class QTAWSIAM_EXPORT DeleteSSHPublicKeyRequest : public IamRequest {

public:
    DeleteSSHPublicKeyRequest(const DeleteSSHPublicKeyRequest &other);
    DeleteSSHPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
