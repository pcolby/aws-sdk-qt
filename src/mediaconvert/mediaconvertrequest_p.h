/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_MEDIACONVERTREQUEST_P_H
#define QTAWS_MEDIACONVERTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class MediaConvertRequest;

class QTAWS_EXPORT MediaConvertRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaConvertRequest::Action action; ///< MediaConvert action to be performed.
    QString apiVersion;        ///< MediaConvert API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaConvert request (query string) parameters. @todo?

    MediaConvertRequestPrivate(const MediaConvertRequest::Action action, MediaConvertRequest * const q);
    MediaConvertRequestPrivate(const MediaConvertRequestPrivate &other, MediaConvertRequest * const q);

    static QString toString(const MediaConvertRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaConvertRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
