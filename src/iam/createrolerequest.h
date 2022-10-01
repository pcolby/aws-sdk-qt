// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLEREQUEST_H
#define QTAWS_CREATEROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateRoleRequestPrivate;

class QTAWSIAM_EXPORT CreateRoleRequest : public IamRequest {

public:
    CreateRoleRequest(const CreateRoleRequest &other);
    CreateRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
