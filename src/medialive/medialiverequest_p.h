/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
