// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAVINGSPLANSCLIENT_H
#define QTAWS_SAVINGSPLANSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssavingsplansglobal.h"

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

class QTAWSSAVINGSPLANS_EXPORT SavingsPlansClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SavingsPlansClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SavingsPlansClient(
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

private:
    Q_DECLARE_PRIVATE(SavingsPlansClient)
    Q_DISABLE_COPY(SavingsPlansClient)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
