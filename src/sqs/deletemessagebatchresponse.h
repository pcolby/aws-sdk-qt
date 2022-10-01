// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEBATCHRESPONSE_H
#define QTAWS_DELETEMESSAGEBATCHRESPONSE_H

#include "sqsresponse.h"
#include "deletemessagebatchrequest.h"

namespace QtAws {
namespace Sqs {

class DeleteMessageBatchResponsePrivate;

class QTAWSSQS_EXPORT DeleteMessageBatchResponse : public SqsResponse {
    Q_OBJECT

public:
    DeleteMessageBatchResponse(const DeleteMessageBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMessageBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMessageBatchResponse)
    Q_DISABLE_COPY(DeleteMessageBatchResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
