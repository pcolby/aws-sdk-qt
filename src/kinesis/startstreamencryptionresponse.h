// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMENCRYPTIONRESPONSE_H
#define QTAWS_STARTSTREAMENCRYPTIONRESPONSE_H

#include "kinesisresponse.h"
#include "startstreamencryptionrequest.h"

namespace QtAws {
namespace Kinesis {

class StartStreamEncryptionResponsePrivate;

class QTAWSKINESIS_EXPORT StartStreamEncryptionResponse : public KinesisResponse {
    Q_OBJECT

public:
    StartStreamEncryptionResponse(const StartStreamEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartStreamEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamEncryptionResponse)
    Q_DISABLE_COPY(StartStreamEncryptionResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
