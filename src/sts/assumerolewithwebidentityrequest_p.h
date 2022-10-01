// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHWEBIDENTITYREQUEST_P_H
#define QTAWS_ASSUMEROLEWITHWEBIDENTITYREQUEST_P_H

#include "stsrequest_p.h"
#include "assumerolewithwebidentityrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithWebIdentityRequest;

class AssumeRoleWithWebIdentityRequestPrivate : public StsRequestPrivate {

public:
    AssumeRoleWithWebIdentityRequestPrivate(const StsRequest::Action action,
                                   AssumeRoleWithWebIdentityRequest * const q);
    AssumeRoleWithWebIdentityRequestPrivate(const AssumeRoleWithWebIdentityRequestPrivate &other,
                                   AssumeRoleWithWebIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssumeRoleWithWebIdentityRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
