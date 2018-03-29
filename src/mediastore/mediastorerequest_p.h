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

#ifndef QTAWS_MEDIASTOREREQUEST_P_H
#define QTAWS_MEDIASTOREREQUEST_P_H

#include "mediastore_p.h"
#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class MediaStoreRequest;

class QTAWS_EXPORT MediaStoreRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
