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

#ifndef QTAWS_SAVINGSPLANSCLIENT_H
#define QTAWS_SAVINGSPLANSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansClientPrivate;
class CreateSavingsPlanRequest;
class CreateSavingsPlanResponse;
class DeleteQueuedSavingsPlanRequest;
class DeleteQueuedSavingsPlanResponse;
class DescribeSavingsPlanRatesRequest;
class DescribeSavingsPlanRatesResponse;
class DescribeSavingsPlansRequest;
class DescribeSavingsPlansResponse;
class DescribeSavingsPlansOfferingRatesRequest;
class DescribeSavingsPlansOfferingRatesResponse;
class DescribeSavingsPlansOfferingsRequest;
class DescribeSavingsPlansOfferingsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT SavingsPlansClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SavingsPlansClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SavingsPlansClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateSavingsPlanResponse * createSavingsPlan(const CreateSavingsPlanRequest &request);
    DeleteQueuedSavingsPlanResponse * deleteQueuedSavingsPlan(const DeleteQueuedSavingsPlanRequest &request);
    DescribeSavingsPlanRatesResponse * describeSavingsPlanRates(const DescribeSavingsPlanRatesRequest &request);
    DescribeSavingsPlansResponse * describeSavingsPlans(const DescribeSavingsPlansRequest &request);
    DescribeSavingsPlansOfferingRatesResponse * describeSavingsPlansOfferingRates(const DescribeSavingsPlansOfferingRatesRequest &request);
    DescribeSavingsPlansOfferingsResponse * describeSavingsPlansOfferings(const DescribeSavingsPlansOfferingsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

protected:
    /// @cond internal
    SavingsPlansClientPrivate * const d_ptr; ///< Internal d-pointer.
    SavingsPlansClient(SavingsPlansClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SavingsPlansClient)
    Q_DISABLE_COPY(SavingsPlansClient)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
