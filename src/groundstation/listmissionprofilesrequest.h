// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMISSIONPROFILESREQUEST_H
#define QTAWS_LISTMISSIONPROFILESREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ListMissionProfilesRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ListMissionProfilesRequest : public GroundStationRequest {

public:
    ListMissionProfilesRequest(const ListMissionProfilesRequest &other);
    ListMissionProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMissionProfilesRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
