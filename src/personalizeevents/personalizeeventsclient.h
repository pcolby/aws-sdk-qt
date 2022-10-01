// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

private:
    Q_DECLARE_PRIVATE(PersonalizeEventsClient)
    Q_DISABLE_COPY(PersonalizeEventsClient)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
