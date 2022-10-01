// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesavingsplansresponse.h"
#include "describesavingsplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlansResponse
 * \brief The DescribeSavingsPlansResponse class provides an interace for SavingsPlans DescribeSavingsPlans responses.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::describeSavingsPlans
 */

/*!
 * Constructs a DescribeSavingsPlansResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSavingsPlansResponse::DescribeSavingsPlansResponse(
        const DescribeSavingsPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SavingsPlansResponse(new DescribeSavingsPlansResponsePrivate(this), parent)
{
    setRequest(new DescribeSavingsPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSavingsPlansRequest * DescribeSavingsPlansResponse::request() const
{
    Q_D(const DescribeSavingsPlansResponse);
    return static_cast<const DescribeSavingsPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SavingsPlans DescribeSavingsPlans \a response.
 */
void DescribeSavingsPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSavingsPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SavingsPlans::DescribeSavingsPlansResponsePrivate
 * \brief The DescribeSavingsPlansResponsePrivate class provides private implementation for DescribeSavingsPlansResponse.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DescribeSavingsPlansResponsePrivate object with public implementation \a q.
 */
DescribeSavingsPlansResponsePrivate::DescribeSavingsPlansResponsePrivate(
    DescribeSavingsPlansResponse * const q) : SavingsPlansResponsePrivate(q)
{

}

/*!
 * Parses a SavingsPlans DescribeSavingsPlans response element from \a xml.
 */
void DescribeSavingsPlansResponsePrivate::parseDescribeSavingsPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSavingsPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SavingsPlans
} // namespace QtAws
