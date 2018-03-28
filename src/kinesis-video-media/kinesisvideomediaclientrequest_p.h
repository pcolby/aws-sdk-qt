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

#ifndef QTAWS_KINESISVIDEOMEDIACLIENTREQUEST_P_H
#define QTAWS_KINESISVIDEOMEDIACLIENTREQUEST_P_H

#include "kinesisvideomedia_p.h"
#include "request.h"

namespace AWS {

namespace KinesisVideoMedia {

class KinesisVideoMediaClientRequest;

class QTAWS_EXPORT KinesisVideoMediaClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    KinesisVideoMediaClientRequest::Action action; ///< KinesisVideoMedia action to be performed.
    QString apiVersion;        ///< KinesisVideoMedia API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideoMedia request (query string) parameters. @todo?

    KinesisVideoMediaClientRequestPrivate(const KinesisVideoMediaClientRequest::Action action, KinesisVideoMediaClientRequest * const q);
    KinesisVideoMediaClientRequestPrivate(const RequestPrivate &other, KinesisVideoMediaClientRequest * const q);

    static QString toString(const KinesisVideoMediaClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoMediaClientRequest)

};

} // namespace KinesisVideoMedia
} // namespace AWS

#endif
