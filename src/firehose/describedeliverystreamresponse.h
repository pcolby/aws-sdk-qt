// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYSTREAMRESPONSE_H
#define QTAWS_DESCRIBEDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "describedeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class DescribeDeliveryStreamResponsePrivate;

class QTAWSFIREHOSE_EXPORT DescribeDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    DescribeDeliveryStreamResponse(const DescribeDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeliveryStreamResponse)
    Q_DISABLE_COPY(DescribeDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
