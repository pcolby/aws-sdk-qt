// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERREQUEST_H
#define QTAWS_UPDATEAPPINSTANCEUSERREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT UpdateAppInstanceUserRequest : public ChimeSdkIdentityRequest {

public:
    UpdateAppInstanceUserRequest(const UpdateAppInstanceUserRequest &other);
    UpdateAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
