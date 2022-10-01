// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEUSERREQUEST_H
#define QTAWS_DELETEAPPINSTANCEUSERREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeleteAppInstanceUserRequest : public ChimeSdkIdentityRequest {

public:
    DeleteAppInstanceUserRequest(const DeleteAppInstanceUserRequest &other);
    DeleteAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
