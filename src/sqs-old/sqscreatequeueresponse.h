// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCREATEQUEUERESPONSE_H
#define SQSCREATEQUEUERESPONSE_H

#include "sqscreatequeuerequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsCreateQueueResponsePrivate;

class QTAWS_EXPORT SqsCreateQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsCreateQueueResponse(const SqsCreateQueueRequest &request,
                           QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsCreateQueueRequest * request() const;

    QString queueUrl() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsCreateQueueResponse)
    Q_DISABLE_COPY(SqsCreateQueueResponse)
    friend class TestSqsCreateQueueResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
