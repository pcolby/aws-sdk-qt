// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREINVITATIONSRESPONSE_H
#define QTAWS_GETRESOURCESHAREINVITATIONSRESPONSE_H

#include "ramresponse.h"
#include "getresourceshareinvitationsrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceShareInvitationsResponsePrivate;

class QTAWSRAM_EXPORT GetResourceShareInvitationsResponse : public RamResponse {
    Q_OBJECT

public:
    GetResourceShareInvitationsResponse(const GetResourceShareInvitationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceShareInvitationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceShareInvitationsResponse)
    Q_DISABLE_COPY(GetResourceShareInvitationsResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
