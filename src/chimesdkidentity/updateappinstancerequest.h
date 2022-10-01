// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEREQUEST_H
#define QTAWS_UPDATEAPPINSTANCEREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT UpdateAppInstanceRequest : public ChimeSdkIdentityRequest {

public:
    UpdateAppInstanceRequest(const UpdateAppInstanceRequest &other);
    UpdateAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
