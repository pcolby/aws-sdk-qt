// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_P_H
#define QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateEnclaveCertificateIamRoleResponse;

class AssociateEnclaveCertificateIamRoleResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateEnclaveCertificateIamRoleResponsePrivate(AssociateEnclaveCertificateIamRoleResponse * const q);

    void parseAssociateEnclaveCertificateIamRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateEnclaveCertificateIamRoleResponse)
    Q_DISABLE_COPY(AssociateEnclaveCertificateIamRoleResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
