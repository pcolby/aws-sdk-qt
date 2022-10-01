// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYGROUPSRESPONSE_P_H
#define QTAWS_LISTGATEWAYGROUPSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListGatewayGroupsResponse;

class ListGatewayGroupsResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListGatewayGroupsResponsePrivate(ListGatewayGroupsResponse * const q);

    void parseListGatewayGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGatewayGroupsResponse)
    Q_DISABLE_COPY(ListGatewayGroupsResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
