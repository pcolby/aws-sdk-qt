// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGQUEUERESPONSE_H
#define QTAWS_TAGQUEUERESPONSE_H

#include "sqsresponse.h"
#include "tagqueuerequest.h"

namespace QtAws {
namespace Sqs {

class TagQueueResponsePrivate;

class QTAWSSQS_EXPORT TagQueueResponse : public SqsResponse {
    Q_OBJECT

public:
    TagQueueResponse(const TagQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagQueueResponse)
    Q_DISABLE_COPY(TagQueueResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
