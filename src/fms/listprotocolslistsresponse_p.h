// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTOCOLSLISTSRESPONSE_P_H
#define QTAWS_LISTPROTOCOLSLISTSRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class ListProtocolsListsResponse;

class ListProtocolsListsResponsePrivate : public FmsResponsePrivate {

public:

    explicit ListProtocolsListsResponsePrivate(ListProtocolsListsResponse * const q);

    void parseListProtocolsListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProtocolsListsResponse)
    Q_DISABLE_COPY(ListProtocolsListsResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
