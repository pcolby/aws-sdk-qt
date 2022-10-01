// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSSHPUBLICKEYREQUEST_H
#define QTAWS_GETSSHPUBLICKEYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetSSHPublicKeyRequestPrivate;

class QTAWSIAM_EXPORT GetSSHPublicKeyRequest : public IamRequest {

public:
    GetSSHPublicKeyRequest(const GetSSHPublicKeyRequest &other);
    GetSSHPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
