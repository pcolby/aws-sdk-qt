// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMISSIONPROFILEREQUEST_H
#define QTAWS_GETMISSIONPROFILEREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GetMissionProfileRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT GetMissionProfileRequest : public GroundStationRequest {

public:
    GetMissionProfileRequest(const GetMissionProfileRequest &other);
    GetMissionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
