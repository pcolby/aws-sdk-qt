// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREREQUEST_P_H
#define QTAWS_MEDIASTOREREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class MediaStoreRequest;

class MediaStoreRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaStoreRequest::Action action; ///< MediaStore action to be performed.
    QString apiVersion;        ///< MediaStore API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaStore request (query string) parameters. @todo?

    MediaStoreRequestPrivate(const MediaStoreRequest::Action action, MediaStoreRequest * const q);
    MediaStoreRequestPrivate(const MediaStoreRequestPrivate &other, MediaStoreRequest * const q);

    static QString toString(const MediaStoreRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaStoreRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
