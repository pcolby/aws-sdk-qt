// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDINVITATIONREQUEST_H
#define QTAWS_SENDINVITATIONREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendInvitationRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SendInvitationRequest : public AlexaForBusinessRequest {

public:
    SendInvitationRequest(const SendInvitationRequest &other);
    SendInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendInvitationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
