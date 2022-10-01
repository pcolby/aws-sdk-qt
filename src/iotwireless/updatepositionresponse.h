// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOSITIONRESPONSE_H
#define QTAWS_UPDATEPOSITIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatepositionrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePositionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdatePositionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdatePositionResponse(const UpdatePositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePositionResponse)
    Q_DISABLE_COPY(UpdatePositionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
