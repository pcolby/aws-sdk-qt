// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURGEQUEUERESPONSE_H
#define QTAWS_PURGEQUEUERESPONSE_H

#include "sqsresponse.h"
#include "purgequeuerequest.h"

namespace QtAws {
namespace Sqs {

class PurgeQueueResponsePrivate;

class QTAWSSQS_EXPORT PurgeQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    PurgeQueueResponse(const PurgeQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PurgeQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurgeQueueResponse)
    Q_DISABLE_COPY(PurgeQueueResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
