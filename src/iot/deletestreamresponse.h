// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMRESPONSE_H
#define QTAWS_DELETESTREAMRESPONSE_H

#include "iotresponse.h"
#include "deletestreamrequest.h"

namespace QtAws {
namespace IoT {

class DeleteStreamResponsePrivate;

class QTAWSIOT_EXPORT DeleteStreamResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteStreamResponse(const DeleteStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamResponse)
    Q_DISABLE_COPY(DeleteStreamResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
