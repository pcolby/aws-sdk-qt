// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERBLOCKSRESPONSE_P_H
#define QTAWS_LISTWORKERBLOCKSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListWorkerBlocksResponse;

class ListWorkerBlocksResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListWorkerBlocksResponsePrivate(ListWorkerBlocksResponse * const q);

    void parseListWorkerBlocksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkerBlocksResponse)
    Q_DISABLE_COPY(ListWorkerBlocksResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
