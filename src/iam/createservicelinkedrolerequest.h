// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICELINKEDROLEREQUEST_H
#define QTAWS_CREATESERVICELINKEDROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateServiceLinkedRoleRequestPrivate;

class QTAWSIAM_EXPORT CreateServiceLinkedRoleRequest : public IamRequest {

public:
    CreateServiceLinkedRoleRequest(const CreateServiceLinkedRoleRequest &other);
    CreateServiceLinkedRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceLinkedRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
