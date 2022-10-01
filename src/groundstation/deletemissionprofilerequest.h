// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMISSIONPROFILEREQUEST_H
#define QTAWS_DELETEMISSIONPROFILEREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteMissionProfileRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT DeleteMissionProfileRequest : public GroundStationRequest {

public:
    DeleteMissionProfileRequest(const DeleteMissionProfileRequest &other);
    DeleteMissionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMissionProfileRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
