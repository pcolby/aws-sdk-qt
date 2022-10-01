// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEETINGSCLIENT_P_H
#define QTAWS_CHIMESDKMEETINGSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ChimeSdkMeetings {

class ChimeSdkMeetingsClient;

class ChimeSdkMeetingsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ChimeSdkMeetingsClientPrivate(ChimeSdkMeetingsClient * const q);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMeetingsClient)
    Q_DISABLE_COPY(ChimeSdkMeetingsClientPrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
