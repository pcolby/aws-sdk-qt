// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGEBATCHRESPONSE_H
#define QTAWS_SENDMESSAGEBATCHRESPONSE_H

#include "sqsresponse.h"
#include "sendmessagebatchrequest.h"

namespace QtAws {
namespace Sqs {

class SendMessageBatchResponsePrivate;

class QTAWSSQS_EXPORT SendMessageBatchResponse : public SqsResponse {
    Q_OBJECT

public:
    SendMessageBatchResponse(const SendMessageBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendMessageBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendMessageBatchResponse)
    Q_DISABLE_COPY(SendMessageBatchResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
