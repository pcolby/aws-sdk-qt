// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSKEYREQUEST_H
#define QTAWS_DELETEACCESSKEYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccessKeyRequestPrivate;

class QTAWSIAM_EXPORT DeleteAccessKeyRequest : public IamRequest {

public:
    DeleteAccessKeyRequest(const DeleteAccessKeyRequest &other);
    DeleteAccessKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
