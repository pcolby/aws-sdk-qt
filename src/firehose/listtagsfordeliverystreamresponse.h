// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDELIVERYSTREAMRESPONSE_H
#define QTAWS_LISTTAGSFORDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "listtagsfordeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class ListTagsForDeliveryStreamResponsePrivate;

class QTAWSFIREHOSE_EXPORT ListTagsForDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    ListTagsForDeliveryStreamResponse(const ListTagsForDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForDeliveryStreamResponse)
    Q_DISABLE_COPY(ListTagsForDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
