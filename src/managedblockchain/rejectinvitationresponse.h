// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINVITATIONRESPONSE_H
#define QTAWS_REJECTINVITATIONRESPONSE_H

#include "managedblockchainresponse.h"
#include "rejectinvitationrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class RejectInvitationResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT RejectInvitationResponse : public ManagedBlockchainResponse {
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

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
