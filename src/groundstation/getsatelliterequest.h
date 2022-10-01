// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSATELLITEREQUEST_H
#define QTAWS_GETSATELLITEREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GetSatelliteRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT GetSatelliteRequest : public GroundStationRequest {

public:
    GetSatelliteRequest(const GetSatelliteRequest &other);
    GetSatelliteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSatelliteRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
