// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVENTORYENTRIESRESPONSE_P_H
#define QTAWS_LISTINVENTORYENTRIESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListInventoryEntriesResponse;

class ListInventoryEntriesResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListInventoryEntriesResponsePrivate(ListInventoryEntriesResponse * const q);

    void parseListInventoryEntriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInventoryEntriesResponse)
    Q_DISABLE_COPY(ListInventoryEntriesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
