// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_H
#define QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLERESPONSE_H

#include "ec2response.h"
#include "disassociateenclavecertificateiamrolerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateEnclaveCertificateIamRoleResponsePrivate;

class QTAWSEC2_EXPORT DisassociateEnclaveCertificateIamRoleResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateEnclaveCertificateIamRoleResponse(const DisassociateEnclaveCertificateIamRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateEnclaveCertificateIamRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateEnclaveCertificateIamRoleResponse)
    Q_DISABLE_COPY(DisassociateEnclaveCertificateIamRoleResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
