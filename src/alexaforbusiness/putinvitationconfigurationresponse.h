// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVITATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTINVITATIONCONFIGURATIONRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "putinvitationconfigurationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutInvitationConfigurationResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutInvitationConfigurationResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    PutInvitationConfigurationResponse(const PutInvitationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInvitationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInvitationConfigurationResponse)
    Q_DISABLE_COPY(PutInvitationConfigurationResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
