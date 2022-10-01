// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGDELIVERYSTREAMRESPONSE_H
#define QTAWS_UNTAGDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "untagdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class UntagDeliveryStreamResponsePrivate;

class QTAWSFIREHOSE_EXPORT UntagDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    UntagDeliveryStreamResponse(const UntagDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagDeliveryStreamResponse)
    Q_DISABLE_COPY(UntagDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
