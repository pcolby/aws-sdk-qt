// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOWCUSTOMROUTINGTRAFFICRESPONSE_H
#define QTAWS_ALLOWCUSTOMROUTINGTRAFFICRESPONSE_H

#include "globalacceleratorresponse.h"
#include "allowcustomroutingtrafficrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AllowCustomRoutingTrafficResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT AllowCustomRoutingTrafficResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    AllowCustomRoutingTrafficResponse(const AllowCustomRoutingTrafficRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllowCustomRoutingTrafficRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllowCustomRoutingTrafficResponse)
    Q_DISABLE_COPY(AllowCustomRoutingTrafficResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
