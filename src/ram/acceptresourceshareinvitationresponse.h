// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESOURCESHAREINVITATIONRESPONSE_H
#define QTAWS_ACCEPTRESOURCESHAREINVITATIONRESPONSE_H

#include "ramresponse.h"
#include "acceptresourceshareinvitationrequest.h"

namespace QtAws {
namespace Ram {

class AcceptResourceShareInvitationResponsePrivate;

class QTAWSRAM_EXPORT AcceptResourceShareInvitationResponse : public RamResponse {
    Q_OBJECT

public:
    AcceptResourceShareInvitationResponse(const AcceptResourceShareInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptResourceShareInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptResourceShareInvitationResponse)
    Q_DISABLE_COPY(AcceptResourceShareInvitationResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
