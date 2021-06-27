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
    return static_cast<const CreateSavingsPlanRequest *>(SavingsPlansResponse::request());
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
