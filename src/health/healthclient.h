// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHCLIENT_H
#define QTAWS_HEALTHCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawshealthglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Health {

class HealthClientPrivate;
class DescribeAffectedAccountsForOrganizationRequest;
class DescribeAffectedAccountsForOrganizationResponse;
class DescribeAffectedEntitiesRequest;
class DescribeAffectedEntitiesResponse;
class DescribeAffectedEntitiesForOrganizationRequest;
class DescribeAffectedEntitiesForOrganizationResponse;
class DescribeEntityAggregatesRequest;
class DescribeEntityAggregatesResponse;
class DescribeEventAggregatesRequest;
class DescribeEventAggregatesResponse;
class DescribeEventDetailsRequest;
class DescribeEventDetailsResponse;
class DescribeEventDetailsForOrganizationRequest;
class DescribeEventDetailsForOrganizationResponse;
class DescribeEventTypesRequest;
class DescribeEventTypesResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeEventsForOrganizationRequest;
class DescribeEventsForOrganizationResponse;
class DescribeHealthServiceStatusForOrganizationRequest;
class DescribeHealthServiceStatusForOrganizationResponse;
class DisableHealthServiceAccessForOrganizationRequest;
class DisableHealthServiceAccessForOrganizationResponse;
class EnableHealthServiceAccessForOrganizationRequest;
class EnableHealthServiceAccessForOrganizationResponse;

class QTAWSHEALTH_EXPORT HealthClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    HealthClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit HealthClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeAffectedAccountsForOrganizationResponse * describeAffectedAccountsForOrganization(const DescribeAffectedAccountsForOrganizationRequest &request);
    DescribeAffectedEntitiesResponse * describeAffectedEntities(const DescribeAffectedEntitiesRequest &request);
    DescribeAffectedEntitiesForOrganizationResponse * describeAffectedEntitiesForOrganization(const DescribeAffectedEntitiesForOrganizationRequest &request);
    DescribeEntityAggregatesResponse * describeEntityAggregates(const DescribeEntityAggregatesRequest &request);
    DescribeEventAggregatesResponse * describeEventAggregates(const DescribeEventAggregatesRequest &request);
    DescribeEventDetailsResponse * describeEventDetails(const DescribeEventDetailsRequest &request);
    DescribeEventDetailsForOrganizationResponse * describeEventDetailsForOrganization(const DescribeEventDetailsForOrganizationRequest &request);
    DescribeEventTypesResponse * describeEventTypes(const DescribeEventTypesRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeEventsForOrganizationResponse * describeEventsForOrganization(const DescribeEventsForOrganizationRequest &request);
    DescribeHealthServiceStatusForOrganizationResponse * describeHealthServiceStatusForOrganization(const DescribeHealthServiceStatusForOrganizationRequest &request);
    DescribeHealthServiceStatusForOrganizationResponse * describeHealthServiceStatusForOrganization();
    DisableHealthServiceAccessForOrganizationResponse * disableHealthServiceAccessForOrganization(const DisableHealthServiceAccessForOrganizationRequest &request);
    DisableHealthServiceAccessForOrganizationResponse * disableHealthServiceAccessForOrganization();
    EnableHealthServiceAccessForOrganizationResponse * enableHealthServiceAccessForOrganization(const EnableHealthServiceAccessForOrganizationRequest &request);
    EnableHealthServiceAccessForOrganizationResponse * enableHealthServiceAccessForOrganization();

private:
    Q_DECLARE_PRIVATE(HealthClient)
    Q_DISABLE_COPY(HealthClient)

};

} // namespace Health
} // namespace QtAws

#endif
