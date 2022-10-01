// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEETINGREQUEST_H
#define QTAWS_GETMEETINGREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class GetMeetingRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT GetMeetingRequest : public ChimeSdkMeetingsRequest {

public:
    GetMeetingRequest(const GetMeetingRequest &other);
    GetMeetingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMeetingRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
