// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERYSTREAMRESPONSE_H
#define QTAWS_CREATEDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "createdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class CreateDeliveryStreamResponsePrivate;

class QTAWSFIREHOSE_EXPORT CreateDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    CreateDeliveryStreamResponse(const CreateDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeliveryStreamResponse)
    Q_DISABLE_COPY(CreateDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
