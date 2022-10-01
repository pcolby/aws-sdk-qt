// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKERBLOCKRESPONSE_P_H
#define QTAWS_DELETEWORKERBLOCKRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class DeleteWorkerBlockResponse;

class DeleteWorkerBlockResponsePrivate : public MTurkResponsePrivate {

public:

    explicit DeleteWorkerBlockResponsePrivate(DeleteWorkerBlockResponse * const q);

    void parseDeleteWorkerBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkerBlockResponse)
    Q_DISABLE_COPY(DeleteWorkerBlockResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
