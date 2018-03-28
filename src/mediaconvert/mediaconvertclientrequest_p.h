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

#ifndef QTAWS_MEDIACONVERTCLIENTREQUEST_P_H
#define QTAWS_MEDIACONVERTCLIENTREQUEST_P_H

#include "mediaconvert_p.h"
#include "mediaconvertclientrequest.h"

namespace AWS {

namespace MediaConvert {

class MediaConvertClientRequest;

class QTAWS_EXPORT MediaConvertClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MediaConvertClientRequest::Action action; ///< MediaConvert action to be performed.
    QString apiVersion;        ///< MediaConvert API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaConvert request (query string) parameters. @todo?

    MediaConvertClientRequestPrivate(const MediaConvertClientRequest::Action action, MediaConvertClientRequest * const q);
    MediaConvertClientRequestPrivate(const MediaConvertClientRequestPrivate &other, MediaConvertClientRequest * const q);

    static QString toString(const MediaConvertClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaConvertClientRequest)

};

} // namespace MediaConvert
} // namespace AWS

#endif
