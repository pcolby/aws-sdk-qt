// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLEREQUEST_H
#define QTAWS_GETROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetRoleRequestPrivate;

class QTAWSIAM_EXPORT GetRoleRequest : public IamRequest {

public:
    GetRoleRequest(const GetRoleRequest &other);
    GetRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
