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

#ifndef QTAWS_APPSTREAMCLIENTREQUEST_P_H
#define QTAWS_APPSTREAMCLIENTREQUEST_P_H

#include "appstream_p.h"
#include "appstreamclientrequest.h"

namespace AWS {

namespace AppStream {

class AppStreamClientRequest;

class QTAWS_EXPORT AppStreamClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    AppStreamClientRequest::Action action; ///< AppStream action to be performed.
    QString apiVersion;        ///< AppStream API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppStream request (query string) parameters. @todo?

    AppStreamClientRequestPrivate(const AppStreamClientRequest::Action action, AppStreamClientRequest * const q);
    AppStreamClientRequestPrivate(const AppStreamClientRequestPrivate &other, AppStreamClientRequest * const q);

    static QString toString(const AppStreamClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppStreamClientRequest)

};

} // namespace AppStream
} // namespace AWS

#endif
