// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSHIPMENTSTATERESPONSE_H
#define QTAWS_UPDATEJOBSHIPMENTSTATERESPONSE_H

#include "snowballresponse.h"
#include "updatejobshipmentstaterequest.h"

namespace QtAws {
namespace Snowball {

class UpdateJobShipmentStateResponsePrivate;

class QTAWSSNOWBALL_EXPORT UpdateJobShipmentStateResponse : public SnowballResponse {
    Q_OBJECT

public:
    UpdateJobShipmentStateResponse(const UpdateJobShipmentStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJobShipmentStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobShipmentStateResponse)
    Q_DISABLE_COPY(UpdateJobShipmentStateResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
