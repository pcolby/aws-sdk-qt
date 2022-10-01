// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINISTRATORACCOUNTREQUEST_H
#define QTAWS_GETADMINISTRATORACCOUNTREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetAdministratorAccountRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetAdministratorAccountRequest : public GuardDutyRequest {

public:
    GetAdministratorAccountRequest(const GetAdministratorAccountRequest &other);
    GetAdministratorAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdministratorAccountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
