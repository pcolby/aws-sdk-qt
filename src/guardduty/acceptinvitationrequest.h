// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONREQUEST_H
#define QTAWS_ACCEPTINVITATIONREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class AcceptInvitationRequestPrivate;

class QTAWSGUARDDUTY_EXPORT AcceptInvitationRequest : public GuardDutyRequest {

public:
    AcceptInvitationRequest(const AcceptInvitationRequest &other);
    AcceptInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInvitationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
