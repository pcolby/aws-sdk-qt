// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESSHPUBLICKEYREQUEST_H
#define QTAWS_UPDATESSHPUBLICKEYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSSHPublicKeyRequestPrivate;

class QTAWSIAM_EXPORT UpdateSSHPublicKeyRequest : public IamRequest {

public:
    UpdateSSHPublicKeyRequest(const UpdateSSHPublicKeyRequest &other);
    UpdateSSHPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
