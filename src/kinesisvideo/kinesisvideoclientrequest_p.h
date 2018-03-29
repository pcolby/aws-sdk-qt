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

#ifndef QTAWS_KINESISVIDEOCLIENTREQUEST_P_H
#define QTAWS_KINESISVIDEOCLIENTREQUEST_P_H

#include "kinesisvideo_p.h"
#include "kinesisvideoclientrequest.h"

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoClientRequest;

class QTAWS_EXPORT KinesisVideoClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisVideoClientRequest::Action action; ///< KinesisVideo action to be performed.
    QString apiVersion;        ///< KinesisVideo API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideo request (query string) parameters. @todo?

    KinesisVideoClientRequestPrivate(const KinesisVideoClientRequest::Action action, KinesisVideoClientRequest * const q);
    KinesisVideoClientRequestPrivate(const KinesisVideoClientRequestPrivate &other, KinesisVideoClientRequest * const q);

    static QString toString(const KinesisVideoClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoClientRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
