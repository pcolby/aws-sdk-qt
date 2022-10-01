// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTRESPONSE_H

#include "ec2response.h"
#include "disableipamorganizationadminaccountrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableIpamOrganizationAdminAccountResponsePrivate;

class QTAWSEC2_EXPORT DisableIpamOrganizationAdminAccountResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableIpamOrganizationAdminAccountResponse(const DisableIpamOrganizationAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableIpamOrganizationAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableIpamOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(DisableIpamOrganizationAdminAccountResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
