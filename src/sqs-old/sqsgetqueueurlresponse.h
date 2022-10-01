// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEURL_H
#define SQSGETQUEUEURL_H

#include "sqsgetqueueurlrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueUrlResponsePrivate;

class QTAWS_EXPORT SqsGetQueueUrlResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsGetQueueUrlResponse(const SqsGetQueueUrlRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsGetQueueUrlRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsGetQueueUrlResponse)
    Q_DISABLE_COPY(SqsGetQueueUrlResponse)
    friend class TestSqsGetQueueUrlResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
