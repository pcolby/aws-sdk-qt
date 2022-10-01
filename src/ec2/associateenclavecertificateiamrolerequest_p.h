// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_P_H
#define QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_P_H

#include "ec2request_p.h"
#include "associateenclavecertificateiamrolerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateEnclaveCertificateIamRoleRequest;

class AssociateEnclaveCertificateIamRoleRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateEnclaveCertificateIamRoleRequestPrivate(const Ec2Request::Action action,
                                   AssociateEnclaveCertificateIamRoleRequest * const q);
    AssociateEnclaveCertificateIamRoleRequestPrivate(const AssociateEnclaveCertificateIamRoleRequestPrivate &other,
                                   AssociateEnclaveCertificateIamRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateEnclaveCertificateIamRoleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
