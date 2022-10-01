// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEMEMBERSRESPONSE_H
#define QTAWS_INVITEMEMBERSRESPONSE_H

#include "securityhubresponse.h"
#include "invitemembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class InviteMembersResponsePrivate;

class QTAWSSECURITYHUB_EXPORT InviteMembersResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    InviteMembersResponse(const InviteMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InviteMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteMembersResponse)
    Q_DISABLE_COPY(InviteMembersResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
