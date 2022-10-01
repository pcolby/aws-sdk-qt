// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class EnableOrganizationAdminAccountRequestPrivate;

class QTAWSGUARDDUTY_EXPORT EnableOrganizationAdminAccountRequest : public GuardDutyRequest {

public:
    EnableOrganizationAdminAccountRequest(const EnableOrganizationAdminAccountRequest &other);
    EnableOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableOrganizationAdminAccountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
