// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTENDEECAPABILITIESREQUEST_H
#define QTAWS_UPDATEATTENDEECAPABILITIESREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class UpdateAttendeeCapabilitiesRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT UpdateAttendeeCapabilitiesRequest : public ChimeSdkMeetingsRequest {

public:
    UpdateAttendeeCapabilitiesRequest(const UpdateAttendeeCapabilitiesRequest &other);
    UpdateAttendeeCapabilitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAttendeeCapabilitiesRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
