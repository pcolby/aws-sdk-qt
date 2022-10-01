// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYREQUEST_H
#define QTAWS_GETJOURNEYREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyRequestPrivate;

class QTAWSPINPOINT_EXPORT GetJourneyRequest : public PinpointRequest {

public:
    GetJourneyRequest(const GetJourneyRequest &other);
    GetJourneyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
