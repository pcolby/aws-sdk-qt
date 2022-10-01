// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTRESPONSE_H
#define QTAWS_GETINVITATIONSCOUNTRESPONSE_H

#include "macie2response.h"
#include "getinvitationscountrequest.h"

namespace QtAws {
namespace Macie2 {

class GetInvitationsCountResponsePrivate;

class QTAWSMACIE2_EXPORT GetInvitationsCountResponse : public Macie2Response {
    Q_OBJECT

public:
    GetInvitationsCountResponse(const GetInvitationsCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInvitationsCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvitationsCountResponse)
    Q_DISABLE_COPY(GetInvitationsCountResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
