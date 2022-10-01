// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMRESPONSE_H
#define QTAWS_CREATESTREAMRESPONSE_H

#include "iotresponse.h"
#include "createstreamrequest.h"

namespace QtAws {
namespace IoT {

class CreateStreamResponsePrivate;

class QTAWSIOT_EXPORT CreateStreamResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateStreamResponse(const CreateStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamResponse)
    Q_DISABLE_COPY(CreateStreamResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
