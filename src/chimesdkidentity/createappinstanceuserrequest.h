// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEUSERREQUEST_H
#define QTAWS_CREATEAPPINSTANCEUSERREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT CreateAppInstanceUserRequest : public ChimeSdkIdentityRequest {

public:
    CreateAppInstanceUserRequest(const CreateAppInstanceUserRequest &other);
    CreateAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
