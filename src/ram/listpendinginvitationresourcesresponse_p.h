// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPENDINGINVITATIONRESOURCESRESPONSE_P_H
#define QTAWS_LISTPENDINGINVITATIONRESOURCESRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class ListPendingInvitationResourcesResponse;

class ListPendingInvitationResourcesResponsePrivate : public RamResponsePrivate {

public:

    explicit ListPendingInvitationResourcesResponsePrivate(ListPendingInvitationResourcesResponse * const q);

    void parseListPendingInvitationResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPendingInvitationResourcesResponse)
    Q_DISABLE_COPY(ListPendingInvitationResourcesResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
