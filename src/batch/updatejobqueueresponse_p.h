// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBQUEUERESPONSE_P_H
#define QTAWS_UPDATEJOBQUEUERESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class UpdateJobQueueResponse;

class UpdateJobQueueResponsePrivate : public BatchResponsePrivate {

public:

    explicit UpdateJobQueueResponsePrivate(UpdateJobQueueResponse * const q);

    void parseUpdateJobQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobQueueResponse)
    Q_DISABLE_COPY(UpdateJobQueueResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
