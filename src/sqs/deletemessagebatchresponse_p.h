// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEBATCHRESPONSE_P_H
#define QTAWS_DELETEMESSAGEBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class DeleteMessageBatchResponse;

class DeleteMessageBatchResponsePrivate : public SqsResponsePrivate {

public:

    explicit DeleteMessageBatchResponsePrivate(DeleteMessageBatchResponse * const q);

    void parseDeleteMessageBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMessageBatchResponse)
    Q_DISABLE_COPY(DeleteMessageBatchResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
