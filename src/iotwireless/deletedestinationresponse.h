// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDESTINATIONRESPONSE_H
#define QTAWS_DELETEDESTINATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletedestinationrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDestinationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteDestinationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteDestinationResponse(const DeleteDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDestinationResponse)
    Q_DISABLE_COPY(DeleteDestinationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
