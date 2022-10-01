// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREACCESSPOINTRESPONSE_H
#define QTAWS_CONFIGUREACCESSPOINTRESPONSE_H

#include "privatenetworksresponse.h"
#include "configureaccesspointrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ConfigureAccessPointResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ConfigureAccessPointResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ConfigureAccessPointResponse(const ConfigureAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfigureAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureAccessPointResponse)
    Q_DISABLE_COPY(ConfigureAccessPointResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
