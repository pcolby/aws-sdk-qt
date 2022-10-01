// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEIDENTIFIERRESPONSE_H
#define QTAWS_GETDEVICEIDENTIFIERRESPONSE_H

#include "privatenetworksresponse.h"
#include "getdeviceidentifierrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class GetDeviceIdentifierResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT GetDeviceIdentifierResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    GetDeviceIdentifierResponse(const GetDeviceIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceIdentifierResponse)
    Q_DISABLE_COPY(GetDeviceIdentifierResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
