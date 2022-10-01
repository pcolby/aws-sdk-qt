// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSATELLITESREQUEST_H
#define QTAWS_LISTSATELLITESREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ListSatellitesRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ListSatellitesRequest : public GroundStationRequest {

public:
    ListSatellitesRequest(const ListSatellitesRequest &other);
    ListSatellitesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSatellitesRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
