// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class AcceptAdministratorInvitationRequestPrivate;

class QTAWSGUARDDUTY_EXPORT AcceptAdministratorInvitationRequest : public GuardDutyRequest {

public:
    AcceptAdministratorInvitationRequest(const AcceptAdministratorInvitationRequest &other);
    AcceptAdministratorInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptAdministratorInvitationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
