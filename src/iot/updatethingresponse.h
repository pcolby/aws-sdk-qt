// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGRESPONSE_H
#define QTAWS_UPDATETHINGRESPONSE_H

#include "iotresponse.h"
#include "updatethingrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingResponsePrivate;

class QTAWSIOT_EXPORT UpdateThingResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateThingResponse(const UpdateThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingResponse)
    Q_DISABLE_COPY(UpdateThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
