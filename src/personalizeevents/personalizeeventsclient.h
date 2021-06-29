/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_PERSONALIZEEVENTSCLIENT_H
#define QTAWS_PERSONALIZEEVENTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspersonalizeeventsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsClientPrivate;
class PutEventsRequest;
class PutEventsResponse;
class PutItemsRequest;
class PutItemsResponse;
class PutUsersRequest;
class PutUsersResponse;

class QTAWSPERSONALIZEEVENTS_EXPORT PersonalizeEventsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PersonalizeEventsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PersonalizeEventsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    PutItemsResponse * putItems(const PutItemsRequest &request);
    PutUsersResponse * putUsers(const PutUsersRequest &request);

protected:
    /// @cond internal
    PersonalizeEventsClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit PersonalizeEventsClient(PersonalizeEventsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(PersonalizeEventsClient)
    Q_DISABLE_COPY(PersonalizeEventsClient)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
