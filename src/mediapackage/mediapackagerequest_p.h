// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEREQUEST_P_H
#define QTAWS_MEDIAPACKAGEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class MediaPackageRequest;

class MediaPackageRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaPackageRequest::Action action; ///< MediaPackage action to be performed.
    QString apiVersion;        ///< MediaPackage API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaPackage request (query string) parameters. @todo?

    MediaPackageRequestPrivate(const MediaPackageRequest::Action action, MediaPackageRequest * const q);
    MediaPackageRequestPrivate(const MediaPackageRequestPrivate &other, MediaPackageRequest * const q);

    static QString toString(const MediaPackageRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaPackageRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
