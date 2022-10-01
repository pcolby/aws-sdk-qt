// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGDELIVERYSTREAMRESPONSE_H
#define QTAWS_TAGDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "tagdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class TagDeliveryStreamResponsePrivate;

class QTAWSFIREHOSE_EXPORT TagDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    TagDeliveryStreamResponse(const TagDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagDeliveryStreamResponse)
    Q_DISABLE_COPY(TagDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
