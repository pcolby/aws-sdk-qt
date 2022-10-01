// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINVITATIONRESPONSE_H
#define QTAWS_REJECTINVITATIONRESPONSE_H

#include "detectiveresponse.h"
#include "rejectinvitationrequest.h"

namespace QtAws {
namespace Detective {

class RejectInvitationResponsePrivate;

class QTAWSDETECTIVE_EXPORT RejectInvitationResponse : public DetectiveResponse {
    Q_OBJECT

public:
    RejectInvitationResponse(const RejectInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInvitationResponse)
    Q_DISABLE_COPY(RejectInvitationResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
