// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINLINEPOLICYTOPERMISSIONSETREQUEST_H
#define QTAWS_PUTINLINEPOLICYTOPERMISSIONSETREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class PutInlinePolicyToPermissionSetRequestPrivate;

class QTAWSSSOADMIN_EXPORT PutInlinePolicyToPermissionSetRequest : public SsoAdminRequest {

public:
    PutInlinePolicyToPermissionSetRequest(const PutInlinePolicyToPermissionSetRequest &other);
    PutInlinePolicyToPermissionSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInlinePolicyToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
