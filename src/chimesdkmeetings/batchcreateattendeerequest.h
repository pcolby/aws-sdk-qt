// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEATTENDEEREQUEST_H
#define QTAWS_BATCHCREATEATTENDEEREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchCreateAttendeeRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT BatchCreateAttendeeRequest : public ChimeSdkMeetingsRequest {

public:
    BatchCreateAttendeeRequest(const BatchCreateAttendeeRequest &other);
    BatchCreateAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateAttendeeRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
