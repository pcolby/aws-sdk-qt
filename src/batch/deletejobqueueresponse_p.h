// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBQUEUERESPONSE_P_H
#define QTAWS_DELETEJOBQUEUERESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DeleteJobQueueResponse;

class DeleteJobQueueResponsePrivate : public BatchResponsePrivate {

public:

    explicit DeleteJobQueueResponsePrivate(DeleteJobQueueResponse * const q);

    void parseDeleteJobQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJobQueueResponse)
    Q_DISABLE_COPY(DeleteJobQueueResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
