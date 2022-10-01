// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_P_H
#define QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateEnclaveCertificateIamRoleResponse;

class DisassociateEnclaveCertificateIamRoleResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateEnclaveCertificateIamRoleResponsePrivate(DisassociateEnclaveCertificateIamRoleResponse * const q);

    void parseDisassociateEnclaveCertificateIamRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateEnclaveCertificateIamRoleResponse)
    Q_DISABLE_COPY(DisassociateEnclaveCertificateIamRoleResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
