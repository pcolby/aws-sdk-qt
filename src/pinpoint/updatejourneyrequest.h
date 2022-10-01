// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYREQUEST_H
#define QTAWS_UPDATEJOURNEYREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateJourneyRequest : public PinpointRequest {

public:
    UpdateJourneyRequest(const UpdateJourneyRequest &other);
    UpdateJourneyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
