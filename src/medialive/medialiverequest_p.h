// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIALIVEREQUEST_P_H
#define QTAWS_MEDIALIVEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class MediaLiveRequest;

class MediaLiveRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaLiveRequest::Action action; ///< MediaLive action to be performed.
    QString apiVersion;        ///< MediaLive API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaLive request (query string) parameters. @todo?

    MediaLiveRequestPrivate(const MediaLiveRequest::Action action, MediaLiveRequest * const q);
    MediaLiveRequestPrivate(const MediaLiveRequestPrivate &other, MediaLiveRequest * const q);

    static QString toString(const MediaLiveRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaLiveRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
