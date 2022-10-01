// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERSHARDRESPONSE_P_H
#define QTAWS_FAILOVERSHARDRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class FailoverShardResponse;

class FailoverShardResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit FailoverShardResponsePrivate(FailoverShardResponse * const q);

    void parseFailoverShardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FailoverShardResponse)
    Q_DISABLE_COPY(FailoverShardResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
