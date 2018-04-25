/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIAREQUEST_P_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaRequest;

class QTAWS_EXPORT KinesisVideoArchivedMediaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisVideoArchivedMediaRequest::Action action; ///< KinesisVideoArchivedMedia action to be performed.
    QString apiVersion;        ///< KinesisVideoArchivedMedia API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideoArchivedMedia request (query string) parameters. @todo?

    KinesisVideoArchivedMediaRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action, KinesisVideoArchivedMediaRequest * const q);
    KinesisVideoArchivedMediaRequestPrivate(const KinesisVideoArchivedMediaRequestPrivate &other, KinesisVideoArchivedMediaRequest * const q);

    static QString toString(const KinesisVideoArchivedMediaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoArchivedMediaRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
