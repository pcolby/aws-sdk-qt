// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHAREINVITATIONRESPONSE_H
#define QTAWS_UPDATESHAREINVITATIONRESPONSE_H

#include "wellarchitectedresponse.h"
#include "updateshareinvitationrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateShareInvitationResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateShareInvitationResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpdateShareInvitationResponse(const UpdateShareInvitationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateShareInvitationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateShareInvitationResponse)
    Q_DISABLE_COPY(UpdateShareInvitationResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
