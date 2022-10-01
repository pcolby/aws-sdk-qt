// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYSTREAMRESPONSE_H
#define QTAWS_DELETEDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "deletedeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class DeleteDeliveryStreamResponsePrivate;

class QTAWSFIREHOSE_EXPORT DeleteDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    DeleteDeliveryStreamResponse(const DeleteDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeliveryStreamResponse)
    Q_DISABLE_COPY(DeleteDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
