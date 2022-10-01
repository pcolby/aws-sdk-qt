// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMISSIONPROFILEREQUEST_H
#define QTAWS_UPDATEMISSIONPROFILEREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class UpdateMissionProfileRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT UpdateMissionProfileRequest : public GroundStationRequest {

public:
    UpdateMissionProfileRequest(const UpdateMissionProfileRequest &other);
    UpdateMissionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
