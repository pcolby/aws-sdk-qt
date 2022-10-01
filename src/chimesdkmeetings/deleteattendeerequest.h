// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEEREQUEST_H
#define QTAWS_DELETEATTENDEEREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteAttendeeRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT DeleteAttendeeRequest : public ChimeSdkMeetingsRequest {

public:
    DeleteAttendeeRequest(const DeleteAttendeeRequest &other);
    DeleteAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttendeeRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
