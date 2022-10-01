// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGROLEREQUEST_H
#define QTAWS_UNTAGROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UntagRoleRequestPrivate;

class QTAWSIAM_EXPORT UntagRoleRequest : public IamRequest {

public:
    UntagRoleRequest(const UntagRoleRequest &other);
    UntagRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
