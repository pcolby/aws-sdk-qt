// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEQUEUE_H
#define SQSDELETEQUEUE_H

#include "sqsdeletequeuerequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteQueueResponsePrivate;

class QTAWS_EXPORT SqsDeleteQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsDeleteQueueResponse(const SqsDeleteQueueRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsDeleteQueueRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsDeleteQueueResponse)
    Q_DISABLE_COPY(SqsDeleteQueueResponse)
    friend class TestSqsDeleteQueueResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
