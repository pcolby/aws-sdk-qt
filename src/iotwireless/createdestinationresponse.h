// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDESTINATIONRESPONSE_H
#define QTAWS_CREATEDESTINATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "createdestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateDestinationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateDestinationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateDestinationResponse(const CreateDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDestinationResponse)
    Q_DISABLE_COPY(CreateDestinationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
