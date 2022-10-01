// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREDATAREQUEST_P_H
#define QTAWS_MEDIASTOREDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediastoredatarequest.h"

namespace QtAws {
namespace MediaStoreData {

class MediaStoreDataRequest;

class MediaStoreDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaStoreDataRequest::Action action; ///< MediaStoreData action to be performed.
    QString apiVersion;        ///< MediaStoreData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaStoreData request (query string) parameters. @todo?

    MediaStoreDataRequestPrivate(const MediaStoreDataRequest::Action action, MediaStoreDataRequest * const q);
    MediaStoreDataRequestPrivate(const MediaStoreDataRequestPrivate &other, MediaStoreDataRequest * const q);

    static QString toString(const MediaStoreDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaStoreDataRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
