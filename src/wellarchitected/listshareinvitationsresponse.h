// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREINVITATIONSRESPONSE_H
#define QTAWS_LISTSHAREINVITATIONSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listshareinvitationsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListShareInvitationsResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListShareInvitationsResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListShareInvitationsResponse(const ListShareInvitationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListShareInvitationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListShareInvitationsResponse)
    Q_DISABLE_COPY(ListShareInvitationsResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
