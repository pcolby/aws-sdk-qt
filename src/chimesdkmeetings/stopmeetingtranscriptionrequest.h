// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMEETINGTRANSCRIPTIONREQUEST_H
#define QTAWS_STOPMEETINGTRANSCRIPTIONREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class StopMeetingTranscriptionRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT StopMeetingTranscriptionRequest : public ChimeSdkMeetingsRequest {

public:
    StopMeetingTranscriptionRequest(const StopMeetingTranscriptionRequest &other);
    StopMeetingTranscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMeetingTranscriptionRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
