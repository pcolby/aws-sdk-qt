// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_P_H
#define QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_P_H

#include "ec2request_p.h"
#include "disassociateenclavecertificateiamrolerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateEnclaveCertificateIamRoleRequest;

class DisassociateEnclaveCertificateIamRoleRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateEnclaveCertificateIamRoleRequestPrivate(const Ec2Request::Action action,
                                   DisassociateEnclaveCertificateIamRoleRequest * const q);
    DisassociateEnclaveCertificateIamRoleRequestPrivate(const DisassociateEnclaveCertificateIamRoleRequestPrivate &other,
                                   DisassociateEnclaveCertificateIamRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateEnclaveCertificateIamRoleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
