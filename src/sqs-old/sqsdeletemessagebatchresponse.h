// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGEBATCH_H
#define SQSDELETEMESSAGEBATCH_H

#include "sqsdeletemessagebatchrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageBatchResponsePrivate;

class QTAWS_EXPORT SqsDeleteMessageBatchResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsDeleteMessageBatchResponse(const SqsDeleteMessageBatchRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsDeleteMessageBatchRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsDeleteMessageBatchResponse)
    Q_DISABLE_COPY(SqsDeleteMessageBatchResponse)
    friend class TestSqsDeleteMessageBatchResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
