// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTRESOURCESHAREINVITATIONRESPONSE_H
#define QTAWS_REJECTRESOURCESHAREINVITATIONRESPONSE_H

#include "ramresponse.h"
#include "rejectresourceshareinvitationrequest.h"

namespace QtAws {
namespace Ram {

class RejectResourceShareInvitationResponsePrivate;

class QTAWSRAM_EXPORT RejectResourceShareInvitationResponse : public RamResponse {
    Q_OBJECT

public:
    RejectResourceShareInvitationResponse(const RejectResourceShareInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectResourceShareInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectResourceShareInvitationResponse)
    Q_DISABLE_COPY(RejectResourceShareInvitationResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
