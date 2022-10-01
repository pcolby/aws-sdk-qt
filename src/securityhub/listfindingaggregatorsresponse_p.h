// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATORSRESPONSE_P_H
#define QTAWS_LISTFINDINGAGGREGATORSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class ListFindingAggregatorsResponse;

class ListFindingAggregatorsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit ListFindingAggregatorsResponsePrivate(ListFindingAggregatorsResponse * const q);

    void parseListFindingAggregatorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFindingAggregatorsResponse)
    Q_DISABLE_COPY(ListFindingAggregatorsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
