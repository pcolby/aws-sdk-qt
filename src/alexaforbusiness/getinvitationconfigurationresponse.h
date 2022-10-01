// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETINVITATIONCONFIGURATIONRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getinvitationconfigurationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetInvitationConfigurationResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetInvitationConfigurationResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetInvitationConfigurationResponse(const GetInvitationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInvitationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvitationConfigurationResponse)
    Q_DISABLE_COPY(GetInvitationConfigurationResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
