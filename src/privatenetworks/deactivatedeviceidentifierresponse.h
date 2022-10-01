// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEDEVICEIDENTIFIERRESPONSE_H
#define QTAWS_DEACTIVATEDEVICEIDENTIFIERRESPONSE_H

#include "privatenetworksresponse.h"
#include "deactivatedeviceidentifierrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeactivateDeviceIdentifierResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT DeactivateDeviceIdentifierResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    DeactivateDeviceIdentifierResponse(const DeactivateDeviceIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateDeviceIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateDeviceIdentifierResponse)
    Q_DISABLE_COPY(DeactivateDeviceIdentifierResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
