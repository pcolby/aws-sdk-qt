// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDELIVERYSTREAMENCRYPTIONRESPONSE_H
#define QTAWS_STOPDELIVERYSTREAMENCRYPTIONRESPONSE_H

#include "firehoseresponse.h"
#include "stopdeliverystreamencryptionrequest.h"

namespace QtAws {
namespace Firehose {

class StopDeliveryStreamEncryptionResponsePrivate;

class QTAWSFIREHOSE_EXPORT StopDeliveryStreamEncryptionResponse : public FirehoseResponse {
    Q_OBJECT

public:
    StopDeliveryStreamEncryptionResponse(const StopDeliveryStreamEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDeliveryStreamEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDeliveryStreamEncryptionResponse)
    Q_DISABLE_COPY(StopDeliveryStreamEncryptionResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
