// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEDEVICEIDENTIFIERRESPONSE_H
#define QTAWS_ACTIVATEDEVICEIDENTIFIERRESPONSE_H

#include "privatenetworksresponse.h"
#include "activatedeviceidentifierrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateDeviceIdentifierResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ActivateDeviceIdentifierResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ActivateDeviceIdentifierResponse(const ActivateDeviceIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateDeviceIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateDeviceIdentifierResponse)
    Q_DISABLE_COPY(ActivateDeviceIdentifierResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
