// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEREQUEST_H
#define QTAWS_DELETEAPPINSTANCEREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeleteAppInstanceRequest : public ChimeSdkIdentityRequest {

public:
    DeleteAppInstanceRequest(const DeleteAppInstanceRequest &other);
    DeleteAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
