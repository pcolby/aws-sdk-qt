// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGEBATCHRESPONSE_P_H
#define QTAWS_SENDMESSAGEBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class SendMessageBatchResponse;

class SendMessageBatchResponsePrivate : public SqsResponsePrivate {

public:

    explicit SendMessageBatchResponsePrivate(SendMessageBatchResponse * const q);

    void parseSendMessageBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendMessageBatchResponse)
    Q_DISABLE_COPY(SendMessageBatchResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
