// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEVODREQUEST_P_H
#define QTAWS_MEDIAPACKAGEVODREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class MediaPackageVodRequest;

class MediaPackageVodRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaPackageVodRequest::Action action; ///< MediaPackageVod action to be performed.
    QString apiVersion;        ///< MediaPackageVod API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaPackageVod request (query string) parameters. @todo?

    MediaPackageVodRequestPrivate(const MediaPackageVodRequest::Action action, MediaPackageVodRequest * const q);
    MediaPackageVodRequestPrivate(const MediaPackageVodRequestPrivate &other, MediaPackageVodRequest * const q);

    static QString toString(const MediaPackageVodRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaPackageVodRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
