// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSPURGEQUEUE_H
#define SQSPURGEQUEUE_H

#include "sqspurgequeuerequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsPurgeQueueResponsePrivate;

class QTAWS_EXPORT SqsPurgeQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsPurgeQueueResponse(const SqsPurgeQueueRequest &request,
                          QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsPurgeQueueRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsPurgeQueueResponse)
    Q_DISABLE_COPY(SqsPurgeQueueResponse)
    friend class TestSqsPurgeQueueResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
