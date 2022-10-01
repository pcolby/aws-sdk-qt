// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDENCLAVECERTIFICATEIAMROLESRESPONSE_P_H
#define QTAWS_GETASSOCIATEDENCLAVECERTIFICATEIAMROLESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedEnclaveCertificateIamRolesResponse;

class GetAssociatedEnclaveCertificateIamRolesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetAssociatedEnclaveCertificateIamRolesResponsePrivate(GetAssociatedEnclaveCertificateIamRolesResponse * const q);

    void parseGetAssociatedEnclaveCertificateIamRolesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssociatedEnclaveCertificateIamRolesResponse)
    Q_DISABLE_COPY(GetAssociatedEnclaveCertificateIamRolesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
