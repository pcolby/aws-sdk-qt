// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEETINGREQUEST_H
#define QTAWS_DELETEMEETINGREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteMeetingRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT DeleteMeetingRequest : public ChimeSdkMeetingsRequest {

public:
    DeleteMeetingRequest(const DeleteMeetingRequest &other);
    DeleteMeetingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMeetingRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
