// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEESREQUEST_H
#define QTAWS_LISTATTENDEESREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class ListAttendeesRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT ListAttendeesRequest : public ChimeSdkMeetingsRequest {

public:
    ListAttendeesRequest(const ListAttendeesRequest &other);
    ListAttendeesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttendeesRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
