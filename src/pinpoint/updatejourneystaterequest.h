// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYSTATEREQUEST_H
#define QTAWS_UPDATEJOURNEYSTATEREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyStateRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateJourneyStateRequest : public PinpointRequest {

public:
    UpdateJourneyStateRequest(const UpdateJourneyStateRequest &other);
    UpdateJourneyStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJourneyStateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
