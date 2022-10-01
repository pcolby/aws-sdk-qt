// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVITATIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTINVITATIONCONFIGURATIONREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutInvitationConfigurationRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutInvitationConfigurationRequest : public AlexaForBusinessRequest {

public:
    PutInvitationConfigurationRequest(const PutInvitationConfigurationRequest &other);
    PutInvitationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInvitationConfigurationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
