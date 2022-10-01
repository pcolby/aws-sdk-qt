// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDELIVERYSTREAMENCRYPTIONRESPONSE_H
#define QTAWS_STARTDELIVERYSTREAMENCRYPTIONRESPONSE_H

#include "firehoseresponse.h"
#include "startdeliverystreamencryptionrequest.h"

namespace QtAws {
namespace Firehose {

class StartDeliveryStreamEncryptionResponsePrivate;

class QTAWSFIREHOSE_EXPORT StartDeliveryStreamEncryptionResponse : public FirehoseResponse {
    Q_OBJECT

public:
    StartDeliveryStreamEncryptionResponse(const StartDeliveryStreamEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDeliveryStreamEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeliveryStreamEncryptionResponse)
    Q_DISABLE_COPY(StartDeliveryStreamEncryptionResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
