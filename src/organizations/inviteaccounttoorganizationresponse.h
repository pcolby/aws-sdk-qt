// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEACCOUNTTOORGANIZATIONRESPONSE_H
#define QTAWS_INVITEACCOUNTTOORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "inviteaccounttoorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class InviteAccountToOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT InviteAccountToOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    InviteAccountToOrganizationResponse(const InviteAccountToOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InviteAccountToOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteAccountToOrganizationResponse)
    Q_DISABLE_COPY(InviteAccountToOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
