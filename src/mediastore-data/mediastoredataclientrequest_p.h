/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIASTOREDATACLIENTREQUEST_P_H
#define QTAWS_MEDIASTOREDATACLIENTREQUEST_P_H

#include "mediastoredata_p.h"
#include "mediastoredataclientrequest.h"

namespace AWS {

namespace MediaStoreData {

class MediaStoreDataClientRequest;

class QTAWS_EXPORT MediaStoreDataClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MediaStoreDataClientRequest::Action action; ///< MediaStoreData action to be performed.
    QString apiVersion;        ///< MediaStoreData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaStoreData request (query string) parameters. @todo?

    MediaStoreDataClientRequestPrivate(const MediaStoreDataClientRequest::Action action, MediaStoreDataClientRequest * const q);
    MediaStoreDataClientRequestPrivate(const MediaStoreDataClientRequestPrivate &other, MediaStoreDataClientRequest * const q);

    static QString toString(const MediaStoreDataClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaStoreDataClientRequest)

};

} // namespace MediaStoreData
} // namespace AWS

#endif
