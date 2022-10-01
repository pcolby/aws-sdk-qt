// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKRESPONSE_P_H
#define QTAWS_GETBLOCKRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class GetBlockResponse;

class GetBlockResponsePrivate : public QldbResponsePrivate {

public:

    explicit GetBlockResponsePrivate(GetBlockResponse * const q);

    void parseGetBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlockResponse)
    Q_DISABLE_COPY(GetBlockResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
