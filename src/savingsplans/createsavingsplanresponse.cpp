// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsavingsplanresponse.h"
#include "createsavingsplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::CreateSavingsPlanResponse
 * \brief The CreateSavingsPlanResponse class provides an interace for SavingsPlans CreateSavingsPlan responses.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::createSavingsPlan
 */

/*!
 * Constructs a CreateSavingsPlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSavingsPlanResponse::CreateSavingsPlanResponse(
        const CreateSavingsPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SavingsPlansResponse(new CreateSavingsPlanResponsePrivate(this), parent)
{
    setRequest(new CreateSavingsPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSavingsPlanRequest * CreateSavingsPlanResponse::request() const
{
    Q_D(const CreateSavingsPlanResponse);
    return static_cast<const CreateSavingsPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SavingsPlans CreateSavingsPlan \a response.
 */
void CreateSavingsPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSavingsPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SavingsPlans::CreateSavingsPlanResponsePrivate
 * \brief The CreateSavingsPlanResponsePrivate class provides private implementation for CreateSavingsPlanResponse.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a CreateSavingsPlanResponsePrivate object with public implementation \a q.
 */
CreateSavingsPlanResponsePrivate::CreateSavingsPlanResponsePrivate(
    CreateSavingsPlanResponse * const q) : SavingsPlansResponsePrivate(q)
{

}

/*!
 * Parses a SavingsPlans CreateSavingsPlan response element from \a xml.
 */
void CreateSavingsPlanResponsePrivate::parseCreateSavingsPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSavingsPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SavingsPlans
} // namespace QtAws
