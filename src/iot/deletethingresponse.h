// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGRESPONSE_H
#define QTAWS_DELETETHINGRESPONSE_H

#include "iotresponse.h"
#include "deletethingrequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingResponsePrivate;

class QTAWSIOT_EXPORT DeleteThingResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteThingResponse(const DeleteThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingResponse)
    Q_DISABLE_COPY(DeleteThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
