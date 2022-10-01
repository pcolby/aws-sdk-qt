// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSE_H
#define QTAWS_UPDATEGATEWAYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updategatewayrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateGatewayResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateGatewayResponse(const UpdateGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayResponse)
    Q_DISABLE_COPY(UpdateGatewayResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
