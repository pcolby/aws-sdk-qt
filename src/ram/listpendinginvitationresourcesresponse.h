// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPENDINGINVITATIONRESOURCESRESPONSE_H
#define QTAWS_LISTPENDINGINVITATIONRESOURCESRESPONSE_H

#include "ramresponse.h"
#include "listpendinginvitationresourcesrequest.h"

namespace QtAws {
namespace Ram {

class ListPendingInvitationResourcesResponsePrivate;

class QTAWSRAM_EXPORT ListPendingInvitationResourcesResponse : public RamResponse {
    Q_OBJECT

public:
    ListPendingInvitationResourcesResponse(const ListPendingInvitationResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPendingInvitationResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPendingInvitationResourcesResponse)
    Q_DISABLE_COPY(ListPendingInvitationResourcesResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
