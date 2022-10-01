// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableIpamOrganizationAdminAccountRequestPrivate;

class QTAWSEC2_EXPORT DisableIpamOrganizationAdminAccountRequest : public Ec2Request {

public:
    DisableIpamOrganizationAdminAccountRequest(const DisableIpamOrganizationAdminAccountRequest &other);
    DisableIpamOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableIpamOrganizationAdminAccountRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
