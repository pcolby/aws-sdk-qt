// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACLRESPONSE_P_H
#define QTAWS_CREATEACLRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class CreateACLResponse;

class CreateACLResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit CreateACLResponsePrivate(CreateACLResponse * const q);

    void parseCreateACLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateACLResponse)
    Q_DISABLE_COPY(CreateACLResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
