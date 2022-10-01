// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEUPDATESRESPONSE_P_H
#define QTAWS_LISTALLOWEDNODETYPEUPDATESRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class ListAllowedNodeTypeUpdatesResponse;

class ListAllowedNodeTypeUpdatesResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit ListAllowedNodeTypeUpdatesResponsePrivate(ListAllowedNodeTypeUpdatesResponse * const q);

    void parseListAllowedNodeTypeUpdatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAllowedNodeTypeUpdatesResponse)
    Q_DISABLE_COPY(ListAllowedNodeTypeUpdatesResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
