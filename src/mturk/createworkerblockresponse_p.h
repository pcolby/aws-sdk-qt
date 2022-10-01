// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERBLOCKRESPONSE_P_H
#define QTAWS_CREATEWORKERBLOCKRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class CreateWorkerBlockResponse;

class CreateWorkerBlockResponsePrivate : public MTurkResponsePrivate {

public:

    explicit CreateWorkerBlockResponsePrivate(CreateWorkerBlockResponse * const q);

    void parseCreateWorkerBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkerBlockResponse)
    Q_DISABLE_COPY(CreateWorkerBlockResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
