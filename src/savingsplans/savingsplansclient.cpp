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

#include "savingsplansclient.h"
#include "savingsplansclient_p.h"

#include "core/awssignaturev4.h"
#include "createsavingsplanrequest.h"
#include "createsavingsplanresponse.h"
#include "deletequeuedsavingsplanrequest.h"
#include "deletequeuedsavingsplanresponse.h"
#include "describesavingsplanratesrequest.h"
#include "describesavingsplanratesresponse.h"
#include "describesavingsplansrequest.h"
#include "describesavingsplansresponse.h"
#include "describesavingsplansofferingratesrequest.h"
#include "describesavingsplansofferingratesresponse.h"
#include "describesavingsplansofferingsrequest.h"
#include "describesavingsplansofferingsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SavingsPlans
 * \brief Contains classess for accessing AWS Savings Plans (SavingsPlans).
 *
 * \inmodule QtAwsSavingsPlans
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::SavingsPlansClient
 * \brief The SavingsPlansClient class provides access to the AWS Savings Plans (SavingsPlans) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 */

/*!
 * \brief Constructs a SavingsPlansClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SavingsPlansClient::SavingsPlansClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-06-28"),
    QStringLiteral("savingsplans"),
    QStringLiteral("AWS Savings Plans"),
    QStringLiteral("savingsplans"),
    parent), d_ptr(new SavingsPlansClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload SavingsPlansClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SavingsPlansClient::SavingsPlansClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-06-28"),
    QStringLiteral("savingsplans"),
    QStringLiteral("AWS Savings Plans"),
    QStringLiteral("savingsplans"),
    parent), d_ptr(new SavingsPlansClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * CreateSavingsPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Savings
 */
CreateSavingsPlanResponse * SavingsPlansClient::createSavingsPlan(const CreateSavingsPlanRequest &request)
{
    return qobject_cast<CreateSavingsPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * DeleteQueuedSavingsPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the queued purchase for the specified Savings
 */
DeleteQueuedSavingsPlanResponse * SavingsPlansClient::deleteQueuedSavingsPlan(const DeleteQueuedSavingsPlanRequest &request)
{
    return qobject_cast<DeleteQueuedSavingsPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * DescribeSavingsPlanRatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified Savings Plans
 */
DescribeSavingsPlanRatesResponse * SavingsPlansClient::describeSavingsPlanRates(const DescribeSavingsPlanRatesRequest &request)
{
    return qobject_cast<DescribeSavingsPlanRatesResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * DescribeSavingsPlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified Savings
 */
DescribeSavingsPlansResponse * SavingsPlansClient::describeSavingsPlans(const DescribeSavingsPlansRequest &request)
{
    return qobject_cast<DescribeSavingsPlansResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * DescribeSavingsPlansOfferingRatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified Savings Plans offering
 */
DescribeSavingsPlansOfferingRatesResponse * SavingsPlansClient::describeSavingsPlansOfferingRates(const DescribeSavingsPlansOfferingRatesRequest &request)
{
    return qobject_cast<DescribeSavingsPlansOfferingRatesResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * DescribeSavingsPlansOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified Savings Plans
 */
DescribeSavingsPlansOfferingsResponse * SavingsPlansClient::describeSavingsPlansOfferings(const DescribeSavingsPlansOfferingsRequest &request)
{
    return qobject_cast<DescribeSavingsPlansOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * SavingsPlansClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified
 */
TagResourceResponse * SavingsPlansClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SavingsPlansClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * SavingsPlansClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::SavingsPlans::SavingsPlansClientPrivate
 * \brief The SavingsPlansClientPrivate class provides private implementation for SavingsPlansClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a SavingsPlansClientPrivate object with public implementation \a q.
 */
SavingsPlansClientPrivate::SavingsPlansClientPrivate(SavingsPlansClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace SavingsPlans
} // namespace QtAws
