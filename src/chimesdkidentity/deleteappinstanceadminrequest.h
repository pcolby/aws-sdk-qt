// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEADMINREQUEST_H
#define QTAWS_DELETEAPPINSTANCEADMINREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceAdminRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeleteAppInstanceAdminRequest : public ChimeSdkIdentityRequest {

public:
    DeleteAppInstanceAdminRequest(const DeleteAppInstanceAdminRequest &other);
    DeleteAppInstanceAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceAdminRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
