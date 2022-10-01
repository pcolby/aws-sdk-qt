// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINLINEPOLICYTOPERMISSIONSETREQUEST_P_H
#define QTAWS_PUTINLINEPOLICYTOPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "putinlinepolicytopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class PutInlinePolicyToPermissionSetRequest;

class PutInlinePolicyToPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    PutInlinePolicyToPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   PutInlinePolicyToPermissionSetRequest * const q);
    PutInlinePolicyToPermissionSetRequestPrivate(const PutInlinePolicyToPermissionSetRequestPrivate &other,
                                   PutInlinePolicyToPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutInlinePolicyToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
