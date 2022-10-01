// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGQUEUERESPONSE_H
#define QTAWS_UNTAGQUEUERESPONSE_H

#include "sqsresponse.h"
#include "untagqueuerequest.h"

namespace QtAws {
namespace Sqs {

class UntagQueueResponsePrivate;

class QTAWSSQS_EXPORT UntagQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    UntagQueueResponse(const UntagQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagQueueResponse)
    Q_DISABLE_COPY(UntagQueueResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
