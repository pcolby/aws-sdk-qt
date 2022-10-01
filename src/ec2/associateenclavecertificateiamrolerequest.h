// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_H
#define QTAWS_ASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateEnclaveCertificateIamRoleRequestPrivate;

class QTAWSEC2_EXPORT AssociateEnclaveCertificateIamRoleRequest : public Ec2Request {

public:
    AssociateEnclaveCertificateIamRoleRequest(const AssociateEnclaveCertificateIamRoleRequest &other);
    AssociateEnclaveCertificateIamRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEnclaveCertificateIamRoleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
