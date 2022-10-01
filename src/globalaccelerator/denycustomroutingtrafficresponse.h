// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DENYCUSTOMROUTINGTRAFFICRESPONSE_H
#define QTAWS_DENYCUSTOMROUTINGTRAFFICRESPONSE_H

#include "globalacceleratorresponse.h"
#include "denycustomroutingtrafficrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DenyCustomRoutingTrafficResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DenyCustomRoutingTrafficResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DenyCustomRoutingTrafficResponse(const DenyCustomRoutingTrafficRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DenyCustomRoutingTrafficRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DenyCustomRoutingTrafficResponse)
    Q_DISABLE_COPY(DenyCustomRoutingTrafficResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
