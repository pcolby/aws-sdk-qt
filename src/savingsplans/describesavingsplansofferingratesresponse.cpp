// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesavingsplansofferingratesresponse.h"
#include "describesavingsplansofferingratesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlansOfferingRatesResponse
 * \brief The DescribeSavingsPlansOfferingRatesResponse class provides an interace for SavingsPlans DescribeSavingsPlansOfferingRates responses.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::describeSavingsPlansOfferingRates
 */

/*!
 * Constructs a DescribeSavingsPlansOfferingRatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSavingsPlansOfferingRatesResponse::DescribeSavingsPlansOfferingRatesResponse(
        const DescribeSavingsPlansOfferingRatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SavingsPlansResponse(new DescribeSavingsPlansOfferingRatesResponsePrivate(this), parent)
{
    setRequest(new DescribeSavingsPlansOfferingRatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSavingsPlansOfferingRatesRequest * DescribeSavingsPlansOfferingRatesResponse::request() const
{
    Q_D(const DescribeSavingsPlansOfferingRatesResponse);
    return static_cast<const DescribeSavingsPlansOfferingRatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SavingsPlans DescribeSavingsPlansOfferingRates \a response.
 */
void DescribeSavingsPlansOfferingRatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSavingsPlansOfferingRatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlansOfferingRatesResponsePrivate
 * \brief The DescribeSavingsPlansOfferingRatesResponsePrivate class provides private implementation for DescribeSavingsPlansOfferingRatesResponse.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DescribeSavingsPlansOfferingRatesResponsePrivate object with public implementation \a q.
 */
DescribeSavingsPlansOfferingRatesResponsePrivate::DescribeSavingsPlansOfferingRatesResponsePrivate(
    DescribeSavingsPlansOfferingRatesResponse * const q) : SavingsPlansResponsePrivate(q)
{

}

/*!
 * Parses a SavingsPlans DescribeSavingsPlansOfferingRates response element from \a xml.
 */
void DescribeSavingsPlansOfferingRatesResponsePrivate::parseDescribeSavingsPlansOfferingRatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSavingsPlansOfferingRatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SavingsPlans
} // namespace QtAws
