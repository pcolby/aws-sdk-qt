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

#ifndef QTAWS_COGNITOSYNCCLIENTREQUEST_P_H
#define QTAWS_COGNITOSYNCCLIENTREQUEST_P_H

#include "cognitosync_p.h"
#include "cognitosyncclientrequest.h"

namespace QtAws {
namespace CognitoSync {

class CognitoSyncClientRequest;

class QTAWS_EXPORT CognitoSyncClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CognitoSyncClientRequest::Action action; ///< CognitoSync action to be performed.
    QString apiVersion;        ///< CognitoSync API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CognitoSync request (query string) parameters. @todo?

    CognitoSyncClientRequestPrivate(const CognitoSyncClientRequest::Action action, CognitoSyncClientRequest * const q);
    CognitoSyncClientRequestPrivate(const CognitoSyncClientRequestPrivate &other, CognitoSyncClientRequest * const q);

    static QString toString(const CognitoSyncClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CognitoSyncClientRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
