// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEREQUEST_H
#define QTAWS_CREATEAPPINSTANCEREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT CreateAppInstanceRequest : public ChimeSdkIdentityRequest {

public:
    CreateAppInstanceRequest(const CreateAppInstanceRequest &other);
    CreateAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
