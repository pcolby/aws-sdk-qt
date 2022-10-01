// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDESTINATIONRESPONSE_H
#define QTAWS_UPDATEDESTINATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatedestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateDestinationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateDestinationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateDestinationResponse(const UpdateDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDestinationResponse)
    Q_DISABLE_COPY(UpdateDestinationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
