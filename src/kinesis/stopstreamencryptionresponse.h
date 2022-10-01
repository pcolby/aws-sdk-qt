// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMENCRYPTIONRESPONSE_H
#define QTAWS_STOPSTREAMENCRYPTIONRESPONSE_H

#include "kinesisresponse.h"
#include "stopstreamencryptionrequest.h"

namespace QtAws {
namespace Kinesis {

class StopStreamEncryptionResponsePrivate;

class QTAWSKINESIS_EXPORT StopStreamEncryptionResponse : public KinesisResponse {
    Q_OBJECT

public:
    StopStreamEncryptionResponse(const StopStreamEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopStreamEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamEncryptionResponse)
    Q_DISABLE_COPY(StopStreamEncryptionResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
