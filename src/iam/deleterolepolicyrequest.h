// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPOLICYREQUEST_H
#define QTAWS_DELETEROLEPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRolePolicyRequestPrivate;

class QTAWSIAM_EXPORT DeleteRolePolicyRequest : public IamRequest {

public:
    DeleteRolePolicyRequest(const DeleteRolePolicyRequest &other);
    DeleteRolePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
