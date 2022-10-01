// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBQUEUERESPONSE_P_H
#define QTAWS_CREATEJOBQUEUERESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class CreateJobQueueResponse;

class CreateJobQueueResponsePrivate : public BatchResponsePrivate {

public:

    explicit CreateJobQueueResponsePrivate(CreateJobQueueResponse * const q);

    void parseCreateJobQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateJobQueueResponse)
    Q_DISABLE_COPY(CreateJobQueueResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
