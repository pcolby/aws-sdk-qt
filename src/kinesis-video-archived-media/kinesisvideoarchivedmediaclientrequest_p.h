/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENTREQUEST_P_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENTREQUEST_P_H

#include "kinesisvideoarchivedmedia_p.h"
#include "request.h"

namespace AWS {

namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaClientRequest;

class QTAWS_EXPORT KinesisVideoArchivedMediaClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    KinesisVideoArchivedMediaClientRequest::Action action; ///< KinesisVideoArchivedMedia action to be performed.
    QString apiVersion;        ///< KinesisVideoArchivedMedia API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideoArchivedMedia request (query string) parameters. @todo?

    KinesisVideoArchivedMediaClientRequestPrivate(const KinesisVideoArchivedMediaClientRequest::Action action, KinesisVideoArchivedMediaClientRequest * const q);
    KinesisVideoArchivedMediaClientRequestPrivate(const RequestPrivate &other, KinesisVideoArchivedMediaClientRequest * const q);

    static QString toString(const KinesisVideoArchivedMediaClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoArchivedMediaClientRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace AWS

#endif
