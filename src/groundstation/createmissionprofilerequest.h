// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMISSIONPROFILEREQUEST_H
#define QTAWS_CREATEMISSIONPROFILEREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class CreateMissionProfileRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT CreateMissionProfileRequest : public GroundStationRequest {

public:
    CreateMissionProfileRequest(const CreateMissionProfileRequest &other);
    CreateMissionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
