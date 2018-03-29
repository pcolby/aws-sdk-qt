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

#ifndef QTAWS_APPSTREAMREQUEST_P_H
#define QTAWS_APPSTREAMREQUEST_P_H

#include "appstream_p.h"
#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class AppStreamRequest;

class QTAWS_EXPORT AppStreamRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppStreamRequest::Action action; ///< AppStream action to be performed.
    QString apiVersion;        ///< AppStream API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppStream request (query string) parameters. @todo?

    AppStreamRequestPrivate(const AppStreamRequest::Action action, AppStreamRequest * const q);
    AppStreamRequestPrivate(const AppStreamRequestPrivate &other, AppStreamRequest * const q);

    static QString toString(const AppStreamRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppStreamRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
