// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEREQUEST_P_H
#define QTAWS_ASSUMEROLEREQUEST_P_H

#include "stsrequest_p.h"
#include "assumerolerequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleRequest;

class AssumeRoleRequestPrivate : public StsRequestPrivate {

public:
    AssumeRoleRequestPrivate(const StsRequest::Action action,
                                   AssumeRoleRequest * const q);
    AssumeRoleRequestPrivate(const AssumeRoleRequestPrivate &other,
                                   AssumeRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssumeRoleRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
