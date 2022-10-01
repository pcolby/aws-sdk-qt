// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUEUERESPONSE_P_H
#define QTAWS_CREATEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class CreateQueueResponse;

class CreateQueueResponsePrivate : public SqsResponsePrivate {

public:

    explicit CreateQueueResponsePrivate(CreateQueueResponse * const q);

    void parseCreateQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQueueResponse)
    Q_DISABLE_COPY(CreateQueueResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
