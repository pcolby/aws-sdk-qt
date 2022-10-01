// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYSRESPONSE_P_H
#define QTAWS_LISTGATEWAYSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListGatewaysResponse;

class ListGatewaysResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListGatewaysResponsePrivate(ListGatewaysResponse * const q);

    void parseListGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGatewaysResponse)
    Q_DISABLE_COPY(ListGatewaysResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
