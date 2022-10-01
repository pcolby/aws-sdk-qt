// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUETAGSRESPONSE_H
#define QTAWS_LISTQUEUETAGSRESPONSE_H

#include "sqsresponse.h"
#include "listqueuetagsrequest.h"

namespace QtAws {
namespace Sqs {

class ListQueueTagsResponsePrivate;

class QTAWSSQS_EXPORT ListQueueTagsResponse : public SqsResponse {
    Q_OBJECT

public:
    ListQueueTagsResponse(const ListQueueTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueueTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueueTagsResponse)
    Q_DISABLE_COPY(ListQueueTagsResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
