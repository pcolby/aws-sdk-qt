// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERPERMISSIONSBOUNDARYREQUEST_H
#define QTAWS_PUTUSERPERMISSIONSBOUNDARYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class PutUserPermissionsBoundaryRequestPrivate;

class QTAWSIAM_EXPORT PutUserPermissionsBoundaryRequest : public IamRequest {

public:
    PutUserPermissionsBoundaryRequest(const PutUserPermissionsBoundaryRequest &other);
    PutUserPermissionsBoundaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutUserPermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
