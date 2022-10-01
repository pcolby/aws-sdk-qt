// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEIDENTIFIERSRESPONSE_H
#define QTAWS_LISTDEVICEIDENTIFIERSRESPONSE_H

#include "privatenetworksresponse.h"
#include "listdeviceidentifiersrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListDeviceIdentifiersResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListDeviceIdentifiersResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ListDeviceIdentifiersResponse(const ListDeviceIdentifiersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceIdentifiersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceIdentifiersResponse)
    Q_DISABLE_COPY(ListDeviceIdentifiersResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
