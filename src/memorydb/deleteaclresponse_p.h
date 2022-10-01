// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACLRESPONSE_P_H
#define QTAWS_DELETEACLRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DeleteACLResponse;

class DeleteACLResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DeleteACLResponsePrivate(DeleteACLResponse * const q);

    void parseDeleteACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteACLResponse)
    Q_DISABLE_COPY(DeleteACLResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
