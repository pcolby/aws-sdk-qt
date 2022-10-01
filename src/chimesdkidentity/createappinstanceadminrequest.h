// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEADMINREQUEST_H
#define QTAWS_CREATEAPPINSTANCEADMINREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceAdminRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT CreateAppInstanceAdminRequest : public ChimeSdkIdentityRequest {

public:
    CreateAppInstanceAdminRequest(const CreateAppInstanceAdminRequest &other);
    CreateAppInstanceAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceAdminRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
