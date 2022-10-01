// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPERMISSIONSBOUNDARYREQUEST_H
#define QTAWS_PUTROLEPERMISSIONSBOUNDARYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class PutRolePermissionsBoundaryRequestPrivate;

class QTAWSIAM_EXPORT PutRolePermissionsBoundaryRequest : public IamRequest {

public:
    PutRolePermissionsBoundaryRequest(const PutRolePermissionsBoundaryRequest &other);
    PutRolePermissionsBoundaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRolePermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
