// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACLRESPONSE_P_H
#define QTAWS_UPDATEACLRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class UpdateACLResponse;

class UpdateACLResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit UpdateACLResponsePrivate(UpdateACLResponse * const q);

    void parseUpdateACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateACLResponse)
    Q_DISABLE_COPY(UpdateACLResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
