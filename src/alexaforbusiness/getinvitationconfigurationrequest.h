// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETINVITATIONCONFIGURATIONREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetInvitationConfigurationRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetInvitationConfigurationRequest : public AlexaForBusinessRequest {

public:
    GetInvitationConfigurationRequest(const GetInvitationConfigurationRequest &other);
    GetInvitationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvitationConfigurationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
