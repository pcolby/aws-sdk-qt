// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEETINGSREQUEST_P_H
#define QTAWS_CHIMESDKMEETINGSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class ChimeSdkMeetingsRequest;

class ChimeSdkMeetingsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ChimeSdkMeetingsRequest::Action action; ///< ChimeSdkMeetings action to be performed.
    QString apiVersion;        ///< ChimeSdkMeetings API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ChimeSdkMeetings request (query string) parameters. @todo?

    ChimeSdkMeetingsRequestPrivate(const ChimeSdkMeetingsRequest::Action action, ChimeSdkMeetingsRequest * const q);
    ChimeSdkMeetingsRequestPrivate(const ChimeSdkMeetingsRequestPrivate &other, ChimeSdkMeetingsRequest * const q);

    static QString toString(const ChimeSdkMeetingsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMeetingsRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
