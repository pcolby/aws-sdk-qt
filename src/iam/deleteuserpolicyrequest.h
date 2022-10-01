// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOLICYREQUEST_H
#define QTAWS_DELETEUSERPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteUserPolicyRequestPrivate;

class QTAWSIAM_EXPORT DeleteUserPolicyRequest : public IamRequest {

public:
    DeleteUserPolicyRequest(const DeleteUserPolicyRequest &other);
    DeleteUserPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
