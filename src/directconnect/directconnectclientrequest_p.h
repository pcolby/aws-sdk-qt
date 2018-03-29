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

#ifndef QTAWS_DIRECTCONNECTCLIENTREQUEST_P_H
#define QTAWS_DIRECTCONNECTCLIENTREQUEST_P_H

#include "directconnect_p.h"
#include "directconnectclientrequest.h"

namespace QtAws {
namespace DirectConnect {

class DirectConnectClientRequest;

class QTAWS_EXPORT DirectConnectClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DirectConnectClientRequest::Action action; ///< DirectConnect action to be performed.
    QString apiVersion;        ///< DirectConnect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DirectConnect request (query string) parameters. @todo?

    DirectConnectClientRequestPrivate(const DirectConnectClientRequest::Action action, DirectConnectClientRequest * const q);
    DirectConnectClientRequestPrivate(const DirectConnectClientRequestPrivate &other, DirectConnectClientRequest * const q);

    static QString toString(const DirectConnectClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DirectConnectClientRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
