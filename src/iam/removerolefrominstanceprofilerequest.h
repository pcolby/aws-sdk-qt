// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMINSTANCEPROFILEREQUEST_H
#define QTAWS_REMOVEROLEFROMINSTANCEPROFILEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class RemoveRoleFromInstanceProfileRequestPrivate;

class QTAWSIAM_EXPORT RemoveRoleFromInstanceProfileRequest : public IamRequest {

public:
    RemoveRoleFromInstanceProfileRequest(const RemoveRoleFromInstanceProfileRequest &other);
    RemoveRoleFromInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
