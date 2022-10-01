// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesavingsplanratesresponse.h"
#include "describesavingsplanratesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlanRatesResponse
 * \brief The DescribeSavingsPlanRatesResponse class provides an interace for SavingsPlans DescribeSavingsPlanRates responses.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::describeSavingsPlanRates
 */

/*!
 * Constructs a DescribeSavingsPlanRatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSavingsPlanRatesResponse::DescribeSavingsPlanRatesResponse(
        const DescribeSavingsPlanRatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SavingsPlansResponse(new DescribeSavingsPlanRatesResponsePrivate(this), parent)
{
    setRequest(new DescribeSavingsPlanRatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSavingsPlanRatesRequest * DescribeSavingsPlanRatesResponse::request() const
{
    Q_D(const DescribeSavingsPlanRatesResponse);
    return static_cast<const DescribeSavingsPlanRatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SavingsPlans DescribeSavingsPlanRates \a response.
 */
void DescribeSavingsPlanRatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSavingsPlanRatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlanRatesResponsePrivate
 * \brief The DescribeSavingsPlanRatesResponsePrivate class provides private implementation for DescribeSavingsPlanRatesResponse.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DescribeSavingsPlanRatesResponsePrivate object with public implementation \a q.
 */
DescribeSavingsPlanRatesResponsePrivate::DescribeSavingsPlanRatesResponsePrivate(
    DescribeSavingsPlanRatesResponse * const q) : SavingsPlansResponsePrivate(q)
{

}

/*!
 * Parses a SavingsPlans DescribeSavingsPlanRates response element from \a xml.
 */
void DescribeSavingsPlanRatesResponsePrivate::parseDescribeSavingsPlanRatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSavingsPlanRatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SavingsPlans
} // namespace QtAws
