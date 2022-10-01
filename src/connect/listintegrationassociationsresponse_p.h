// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTINTEGRATIONASSOCIATIONSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListIntegrationAssociationsResponse;

class ListIntegrationAssociationsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListIntegrationAssociationsResponsePrivate(ListIntegrationAssociationsResponse * const q);

    void parseListIntegrationAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIntegrationAssociationsResponse)
    Q_DISABLE_COPY(ListIntegrationAssociationsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
