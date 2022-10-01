// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONNECTREQUEST_P_H
#define QTAWS_MEDIACONNECTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class MediaConnectRequest;

class MediaConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaConnectRequest::Action action; ///< MediaConnect action to be performed.
    QString apiVersion;        ///< MediaConnect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaConnect request (query string) parameters. @todo?

    MediaConnectRequestPrivate(const MediaConnectRequest::Action action, MediaConnectRequest * const q);
    MediaConnectRequestPrivate(const MediaConnectRequestPrivate &other, MediaConnectRequest * const q);

    static QString toString(const MediaConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaConnectRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
